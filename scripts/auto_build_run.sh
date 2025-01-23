#!/bin/bash
#--------------------------------------
set -e

# 清理函数：终止运行的程序并删除 PID 文件
cleanup() {
    echo -e "\n正在清理..."
    if [ -f "$PidFile" ]; then
        old_pid=$(cat "$PidFile")
        if kill -0 "$old_pid" 2>/dev/null; then
            echo "终止程序进程 (PID: $old_pid)"
            kill "$old_pid"
        fi
        rm -f "$PidFile"
    fi
    exit 0
}

# 注册信号处理
trap cleanup SIGINT SIGTERM

# 检查 inotify-tools 是否安装
if ! command -v inotifywait &> /dev/null; then
    echo "请先安装 inotify-tools:"
    echo "Ubuntu/Debian: sudo apt-get install inotify-tools"
    echo "CentOS/RHEL: sudo yum install inotify-tools"
    exit 1
fi

# 获取项目根目录
PrjDir=$(cd $(dirname $0); cd ..; pwd -P)
BuildType="release"  # 或 "debug"
ExePath="$PrjDir/out/build/$BuildType/demo"
PidFile="/tmp/demo_auto_run.pid"

# 编译并运行程序
build_and_run() {
    echo "开始编译..."
    
    # 编译项目 (使用 || true 防止编译失败导致脚本退出)
    if [ "$BuildType" == "debug" ]; then
        $PrjDir/scripts/cmake_make.sh debug || {
            echo "编译失败，继续监听文件变化..."
            return 1
        }
    else
        $PrjDir/scripts/cmake_make.sh || {
            echo "编译失败，继续监听文件变化..."
            return 1
        }
    fi

    # 确保编译成功后再继续
    if [ ! -f "$ExePath" ]; then
        echo "错误：找不到可执行文件 $ExePath"
        return 1
    fi

    # 编译成功后，如果之前的程序还在运行，先结束它
    if [ -f "$PidFile" ]; then
        old_pid=$(cat "$PidFile")
        if kill -0 "$old_pid" 2>/dev/null; then
            echo "终止旧进程 (PID: $old_pid)"
            kill "$old_pid"
            # 等待旧进程完全退出
            sleep 0.5
        fi
    fi

    # 运行新编译的程序
    echo "启动程序..."
    $ExePath &
    echo $! > "$PidFile"
    echo "程序已启动 (PID: $(cat $PidFile))"
}

# 首次编译和运行
build_and_run || true  # 即使首次编译失败也继续运行脚本

# 监听文件变化
echo "开始监听文件变化..."
echo "按 Ctrl+C 停止监听和程序..."
while true; do
    inotifywait -r -e modify,create,delete \
        --exclude '(\.git|out|\.vscode)' \
        -q \
        "$PrjDir/main" \
        "$PrjDir/lvgl" \
        "$PrjDir/lv_drivers" \
        "$PrjDir/lv_conf.h" \
        "$PrjDir/lv_demo_conf.h" \
        "$PrjDir/lv_drv_conf.h" \
        "$PrjDir/CMakeLists.txt"
        
    # 等待一小段时间，避免文件保存时出现多次触发
    sleep 1
    
    echo "检测到文件变化，重新编译..."
    build_and_run || true  # 编译失败继续监听
done 