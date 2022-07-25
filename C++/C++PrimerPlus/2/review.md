## 1. c++程序的模块叫什么？
* c++程序的模块叫做函数
## 2. 下面的预处理编译指令是做什么用的？ -> #include <iostream>
* 用来引入iostream库文件，使用该指令之后可以调用iostream里的函数
## 3. 下面的语句是做什么的？ -> using namespace std;
* 为了避免不同库文件里面有相同函数名，从而导致函数引用混乱，使用using namespace可以明确使用的是什么库里的函数
## 4. 什么语句可以打印“hello world”，然后开始新的一行？
* cout语句，开始新的一行：endl或者换行符：\n
## 5. 什么语句可以用来创建名为cheeses的整数变量？
* int
## 6. 什么语句可以用来将值32、赋值给变量cheeses？
* 赋值语句：=
## 7. 什么语句可以用来将从键盘输入的值读入变量cheeses中？
* cin >> cheeses
## 8. 什么语句可以用来打印“we have x varieties of cheeses”,其中x为变量cheeses的当前值？
* cout << "we have" << x << "varieties of cheeses"
## 9. 下面的函数原型指出了关于函数的那些信息？
* int froop(double t); -> froop函数的输出是int，输入是double型的t变量
* void rattle(int n); -> rattle函数的输入是int型的n变量，没有输出
* int prune(void); -> prune函数的没有输入，输出是int型
## 10. 定义函数的时候，什么时候不必使用关键字return?
* 当函数定义输出为void的时候，例如：void func()
## 11. 假如你编写的main()函数包含以下代码：cout << "please enter you PIN: ";而编译器指出cout是一个未知标识符，导致这种问题的原因是什么？指出三种修复这种问题的方法？
* 原因：没能导入iostream库文件
* 修复方法：
    * #include <iostream>
    * #include iostream.h
    * 直接copy iostream库文件内容到编写的code文件中。

## 答案：
1.它们叫作函数。

2．这将导致在最终的编译之前，使用 iostream 文件的内容替换该编译指令。

3．它使得程序可以使用 std 名称空间中的定义。

4．cout << "Hello, world\n";
或
cout << "Hello, world" << endl;

5．int cheeses;

6．cheeses = 32;

7．cin >> cheeses;

8．cout << "We have " << cheeses << " varieties of cheese\n";

9．调用函数 froop()时，应提供一个参数，该参数的类型为 double，而该函数将返回一个 int 值。例如，
可以像下面这样使用它：
int gval = froop(3.14159);
函数 rattle()接受一个 int 参数且没有返回值。例如，可以这样使用它：
rattle(37);
函数 prune()不接受任何参数且返回一个 int 值。例如，可以这样使用它：
int residue = prune();

10．当函数的返回类型为 void 时，不用在函数中使用 return。然而，如果不提供返回值，则可以使
用它：
return; 