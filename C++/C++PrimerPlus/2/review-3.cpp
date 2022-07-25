// 2022-7-25
// 编写一个c++程序，他使用三个用户自定义的函数，包括main函数，并生成下面的输出：
// three blind mice
// three blind mice
// see how they run
// see how they run
// 其中一个函数要调用两次，该函数生成前两行，另一个函数也要被调用两次，完成其余的输出

#include <iostream>
using namespace std;
void firstfunc(void);
void secondfunc(void);


int main(){
    firstfunc();
    firstfunc();
    secondfunc();
    secondfunc();
}
void firstfunc(){
    cout << "three blind mice\n";
}
void secondfunc(){
    cout << "see how they run\n";
}