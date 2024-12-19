# 设置 CMake 最低可用版本
cmake_minimum_required(VERSION 3.14)

# 设置工程名称和其他属性
project(lvgl-sdl)

# 设置版本为 c99 c++11
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ARM32 "build for arm32" OFF)
if (ARM32)
	# 添加预定义宏 ARM32
	add_definitions(-DARM32)

	# 指定交叉编译
    set(CMAKE_C_COMPILER arm-linux-gnueabihf-gcc)
	set(CMAKE_CXX_COMPILER arm-linux-gnueabihf-g++)
endif ()

# 预编译宏定义
add_definitions(-DLV_BUILD_TEST=0)
add_definitions(-DUSE_SDL=1)

# 函数：递归添加子目录到全局头文件，root_dir 需要是完整路径
if (NOT include_sub_directories_recursively)
    function(include_sub_directories_recursively root_dir)
        if (IS_DIRECTORY ${root_dir})               # 当前路径是一个目录吗，是的话就加入到包含目录
            message("include dir: " ${root_dir})
            include_directories(${root_dir})
        endif()

        file(GLOB ALL_SUB RELATIVE ${root_dir} ${root_dir}/*) # 获得当前目录下的所有文件
        foreach(sub ${ALL_SUB})
            if (IS_DIRECTORY ${root_dir}/${sub})
                include_sub_directories_recursively(${root_dir}/${sub}) # 对子目录递归调用，进行包含
            endif()
        endforeach()
    endfunction()
endif ()

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/depend/include)
include_sub_directories_recursively(${PROJECT_SOURCE_DIR}/lvgl)
include_sub_directories_recursively(${PROJECT_SOURCE_DIR}/lv_drivers)

# 源文件集合
file(GLOB_RECURSE SRCS 
    "lvgl/*.cpp" "lvgl/*.c"
    "lv_drivers/*.cpp" "lv_drivers/*.c"
    "main/src/*.cpp" "main/src/*.c"
)

# 创建可执行程序项目
add_executable(demo ${SRCS})

if (WIN32)
	set(libsdl2_main_a "${PROJECT_SOURCE_DIR}/depend/lib/win64/SDL2main.lib")
	set(libsdl2 "${PROJECT_SOURCE_DIR}/depend/lib/win64/SDL2.lib")

	set(libsdl2_dll "${PROJECT_SOURCE_DIR}/depend/lib/win64/SDL2.dll")
else ()
	if (ARM32)
		set(libsdl2_main_a "")
		set(libsdl2 "")
	else ()
		set(libsdl2_main_a "${PROJECT_SOURCE_DIR}/depend/lib/linux64/libSDL2main.a")
		set(libsdl2 "${PROJECT_SOURCE_DIR}/depend/lib/linux64/libSDL2-2.0.so")
	endif ()
endif ()

# 链接库
target_link_libraries(demo
    PRIVATE ${libsdl2_main_a}
    PRIVATE ${libsdl2}
)

# 设置 rpath
SET_TARGET_PROPERTIES(demo
    PROPERTIES BUILD_RPATH ${CMAKE_BINARY_DIR})

# 构建成功后复制依赖库到可执行程序所在目录
if (WIN32)
	add_custom_command(TARGET demo POST_BUILD 
		COMMAND ${CMAKE_COMMAND} -E copy ${libsdl2_dll} ${CMAKE_BINARY_DIR}
	)
else ()
	if (NOT ARM32)
		add_custom_command(TARGET demo POST_BUILD 
			COMMAND cp ${libsdl2} ${CMAKE_BINARY_DIR}/libSDL2-2.0.so.0
		)
	endif ()
endif ()