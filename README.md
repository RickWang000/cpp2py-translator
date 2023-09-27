# cpp2py-translator
使用方法：  
运行 `/exe/` 中 `test.bat` 文件，自动执行以下指令：  
```bash
win_bison -d mylp.y     # 用bison工具生成中间文件"mylp.tab.h/c"
win_flex mylp.l         # 用flex工具生成中间文件"lex.yy.c" 
gcc -o test mylp.tab.c tree_node.c lex.yy.c generate_code.c     # 用gcc联合编译"mylp.tab.c"、"tree_node.c"、"lex.yy.c"、“generate_code.c”文件，生成可执行文件"test.exe", 执行此步骤前应安装gcc 
```
此外， `test.bat` 中包含了一些修改测试文件名称，执行两次 `test.exe` ，以获得：
 - 测试文件 `palindromic.cpp` 的语法分析树输出文件：`out_palindromic.txt`
 - 测试文件 `rank.cpp` 的语法分析树输出文件：`out_rank.txt`

注：`/exe/` 中的 `/data/` 文件为 `win_bison` 运行所需的依赖文件包

提交文件根目录 `/src/` 目录：

- `mylp.l` : 编写的 `lex` 输入文件
- `lex.yy.c` : 用 `mylp.l` 以及 `flex` 工具得到的供c编译器使用的中间文件
- `mylp.y` : 编写的 `bison` 输入文件
- `mylp.tab.h/c` : 用 `mylp.y` 以及 `bison` 工具得到的供c编译器使用的中间文件
- `test.exe` : 将 `lex.yy.c` 编译得到的可执行文件，以处于同目录的 `input.cpp` 为输入文件，生成token流并输出至同目录的 `out.txt` 文件
- `tree_node.h/c` : 定义语法分析树结点结构体、构造函数及打印函数的文件
- `generate_code.h/c` : 定义代码生成函数的文件
- `out_palindromic.py/out_rank.py` :分别以"回文检测"、"排序"cpp文件为输入，获得的python代码文件
- `palindromic/rank.cpp` : 测试文件

注：所用 `flex/bison` 工具网址：https://sourceforge.net/projects/winflexbison/