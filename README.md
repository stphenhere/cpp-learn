# c++_learn

C++ 自学练习代码。

## 目录

| 路径 | 内容 |
| --- | --- |
| `address book management/` | 通讯录管理系统（结构体、结构体数组、菜单循环）—— 进行中 |
| `function/bubble sort/` | 冒泡排序（数组传参、指针） |
| `function/multiple function/` | 多文件编译演示（`swap.h` / `swap.cpp` / `main.cpp`） |

## 怎么编译

用 VS Code 打开本文件夹：

| 操作 | 走哪条配置 | 输出 |
| --- | --- | --- |
| `F6` | 扩展 `c-cpp-compile-run` | `output/<源文件名>.exe` |
| `Ctrl+Shift+B` | 本仓库的 `.vscode/tasks.json` | `output/main.exe` |
| `F5` | 本仓库的 `.vscode/launch.json`（gdb 调试） | 自动先编译再调试 |

> 多文件项目（如 `multiple function/`）要用 `Ctrl+Shift+B` —— 它会把当前文件夹里的**所有 `.cpp` 一起编译**。只编一个会报 `undefined reference`。

## 环境说明

- 编译器：`C:\msys64\ucrt64\bin\g++.exe`（MSYS2 / UCRT64）
- 中文乱码：源码存 UTF-8，而 Windows 控制台是 GBK(936)，所以编译要加 `-fexec-charset=GBK`（已配在 `tasks.json` 和 `c-cpp-compile-run` 扩展设置里）
- 编译产物（`output/`、`*.exe`）已在 `.gitignore` 中排除，本地按一次编译键就会重新生成
