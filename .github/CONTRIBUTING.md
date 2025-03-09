# 贡献指南

首先，感谢您对本仓库的贡献。

## 提示

- 编程语言必须为C++
- 如果你不熟悉Markdown和$LaTeX$语法，前往洛谷的[Markdown手册](https://help.luogu.com.cn/rules/academic/handbook/markdown)和[LaTeX手册](https://help.luogu.com.cn/rules/academic/handbook/latex)。
- 老OJ文件名必须为 `solution<problemNumber>.md`。 比如: `solution1.md`.
- 新OJ文件名以具体题号为准。比如：`P1000.md`

## 建议的开发工具

[Visual Studio Code](https://code.visualstudio.com/)

extensions:

- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

- [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)

- [Office Viewer](https://marketplace.visualstudio.com/items?itemName=cweijan.vscode-office)

- [OI Runner](https://marketplace.visualstudio.com/items?itemName=CmdBlock.oi-runner)

- [Competitive Programming Helper (cph)](https://marketplace.visualstudio.com/items?itemName=DivyanshuAgrawal.competitive-programming-helper)

## 示例代码块

### 老OJ

```cpp
// OJ #1 A+B问题

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;

    return 0;
}

```

### 新OJ

```cpp
// newOJ P1007 简单a+b

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;

    return 0;
}

```

## 工作流程

详见[WORKFLOW.md](./WORKFLOW.md)
