@echo off
:: 进入进入工程根目录(当前脚本的上级目录)
cd /d %~dp0\..
:: 删除 out 目录
::rd/s/q out
:: 新建进入 out 目录
mkdir out
cd out
:: 新建进入 build 目录
mkdir build
cd build
:: 解析 cmake 脚本
cmake.exe ..\.. -G "Visual Studio 16 2019"

:: 编译
cmake --build . --config Debug
:: 另一方法：直接调用 msbuild 进行编译
::"D:\Program Files\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" .\xxx.sln

:: 移动库文件
move "*.dll" "Debug\"