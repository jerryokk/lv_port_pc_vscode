#!/bin/bash
#--------------------------------------
#set -x     # 打开后：显示输入的命令
set -e      # 打开后：遇到错误命令就终止
#--------------------------------------

# 指定编译的类型（默认 release）
if [ "$1" == "debug" ]; then
    make_flag="debug"
fi

# 指定相关目录和参数
PrjDir=`cd $(dirname $0); cd ..; pwd -P`
if [ "$make_flag" == "debug" ]; then
    BuildDir=$PrjDir/out/build/debug
    BuildCfg="-DCMAKE_BUILD_TYPE=Debug"
else
    BuildDir=$PrjDir/out/build/release
    BuildCfg="-DCMAKE_BUILD_TYPE=Release"
fi

# 创建生成目录，并进入
mkdir -p $BuildDir
cd $BuildDir

# 解析 cmake 脚本
cmake $BuildCfg $PrjDir

# 进行编译
make

#--------------------------------------
set +x
set +e
#--------------------------------------
