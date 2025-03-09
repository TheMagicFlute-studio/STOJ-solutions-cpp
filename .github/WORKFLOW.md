# 工作流程

## bug report

如果你发现了问题，先在[问题追踪器](https://github.com/TheMagicFlute-studio/STOJ-solutions-cpp/issues)上检索一下是否有类似的问题，如果没有，直接提issue并套用bug-report模板。

## enhancement

你有两种方法对此仓库进行贡献。

### 1. GiHub上直接进行修改（不推荐，仅适合没有任何git基础的贡献者使用）

1. 到[老OJ](https://oj.stemstar.com/)或者[新OJ](http://newoj.stemstar.com:9081/)上解决一个题目
2. fork本仓库
3. 新建分支dev
4. 切换到该分支
5. 套用[SOLUTION-TEMPLATE.md](./SOLUTION_TEMPLATE.md)模板。如果该题目已经有题解了，套用H1标题一下的内容，并添加到题解文档末尾
6. 将文档按照[CONTRIBUTING.md](./CONTRIBUTING.md)中的要求进行重命名，并放进对应的文件夹中
7. 确保没有冲突，并提交[Pull Request](https://github.com/TheMagicFlute-studio/STOJ-solutions-cpp/pulls)到TheMagicFlute-studio/main分支

### 2. 使用git进行修改（推荐）

1. 到[老OJ](https://oj.stemstar.com/)或者[新OJ](http://newoj.stemstar.com:9081/)上解决一个题目
2. fork本仓库
3. 使用 `git clone`命令将你的fork克隆到本地
4. 使用 `git checkout -b dev`命令新建一个分支，并切换到分支
5. 套用[SOLUTION-TEMPLATE.md](./SOLUTION_TEMPLATE.md)模板。如果该题目已经有题解了，套用H1标题一下的内容，并添加到题解文档末尾
6. 将文档按照[CONTRIBUTING.md](./CONTRIBUTING.md)中的要求进行重命名，并放进对应的文件夹中
7. 使用 `git add .`命令将所有修改添加到暂存区
8. 使用 `git commit -m "add solution for problem xxx"`命令提交修改
9. 使用 `git push origin dev`命令将修改推送到你的fork
10. 确保没有冲突，并提交[Pull Request](https://github.com/TheMagicFlute-studio/STOJ-solutions-cpp/pulls)到TheMagicFlute-studio/main分支

恭喜你，你已经完成了贡献！你要等的是管理员审核你的代码，并合并到主分支。

如果你的代码没有被接受，请按照管理员给出的建议进行修改，并重新提交。

<!-- 
1. choose a problem on [STOJ](https://oj.stemstar.com/problems) and solve it.
2. commit it on [STOJ](https://oj.stemstar.com/problems).
3. if the code is accepted, you can commit it to the repository. -->

## format

如果有一下情况，可以提issue或Pull Request：

1. 题解格式不正确（包括不正确的空行，缺少最后的空行，不正确的缩进，代码块缺少最后的空行等）
2. 代码块首行无题目号注释
3. 代码风格不统一
4. 有笔误
5. 想修改题解作者名称
