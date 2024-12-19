# Simulator project for LVGL embedded GUI Library

LVGL v8.3 模拟器，运行方法：VS 打开 CMake 文件，点击运行 demo.exe。

The [LVGL](https://github.com/lvgl/lvgl) is written mainly for microcontrollers and embedded systems however you can run the library **on your PC** as well without any embedded hardware. The code written on PC can be simply copied when your are using an embedded system.

Using a PC simulator instead of an embedded hardware has several advantages:
* **Costs $0** because you don't have to buy or design PCB
* **Fast** because you don't have to design and manufacture PCB
* **Collaborative** because any number of developers can work in the same environment
* **Developer friendly** because much easier and faster to debug on PC

## Requirements
This project is configured for [VSCode](https://code.visualstudio.com) and only tested on Linux, although this may work on OSx or WSL. It requires a working version of GCC, GDB and make in your path.

To allow debugging inside VSCode you will also require a GDB [extension](https://marketplace.visualstudio.com/items?itemName=webfreak.debug) or other suitable debugger. All the requirements have been pre-configured in the [.workspace](simulator.code-workspace) file (simply open the project by doubleclick on this file).

The project can use **SDL** or **X11** as LVGL display driver for lowlevel graphics/mouse/keyboard support. This can be defined in the [Makefile](Makefile#L8).
Please make sure the selected library is installed in the system (check [Install graphics driver](#install-graphics-driver)).

## Usage

### Get the PC project

Clone the PC project and the related sub modules:

```bash
git clone --recursive https://github.com/lvgl/lv_port_pc_vscode
```

### Install graphics driver
The project can use **SDL** or **X11** as LVGL display driver. This can be selected in the [Makefile](Makefile#L8).
Please make sure the used library is installed in the system:

#### Install SDL
You can download SDL from https://www.libsdl.org/

On on Linux you can install it via terminal:
```bash
sudo apt-get update && sudo apt-get install -y build-essential libsdl2-dev
```

#### Install X11
On on Linux you can install it via terminal:
```bash
sudo apt-get update && sudo apt-get install -y libx11-dev
```

### Setup
To allow custom UI code an `lv_conf.h` file placed at `ui/simulator/inc` will automatically override this projects lv_conf.h file. By default code under `ui` is ignored so you can reuse this repository for multiple projects. You will need to place a call from `main.c` to your UI's entry function.

To build and debug, press F5. You should now have your UI displayed in a new window and can access all the debug features of VSCode through GDB.

To allow temporary modification between simulator and device code, a SIMULATOR=1 define is added globally.
