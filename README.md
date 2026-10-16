# c++_learn

C++ 自学练习代码。环境：VS Code + msys64 ucrt64 的 g++。

## 目录

| 路径 | 内容 |
| --- | --- |
| `address book management/` | 通讯录管理系统（结构体、结构体数组、菜单循环） |
| `function/bubble sort/` | 冒泡排序（数组传参、指针） |
| `function/multiple function/` | 多文件编译演示（`swap.h` / `swap.cpp` / `main.cpp`） |

## 怎么编译

用 VS Code 打开本文件夹，按 `Ctrl+Shift+B`。配置在 `.vscode/tasks.json`：
会把**当前文件所在文件夹里的所有 `.cpp` 一起编译**，输出到该文件夹的 `output/main.exe`。

按 `F5` 直接编译并调试（`.vscode/launch.json` 已配好 gdb）。

> 多文件项目必须把所有 `.cpp` 一起编译，只编一个会报 `undefined reference`。

编译产物（`output/`、`*.exe`）已在 `.gitignore` 里排除，不纳入版本管理 —— 本地按一次 `Ctrl+Shift+B` 就会重新生成。
