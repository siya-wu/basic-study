// 2022-7-25
// 编写一个程序，其main()调用一个用户定义的函数，以光年为参数，并返回对应天文单位的值，该程序按下面的格式要求用户输入光年，并显示结果：1光年=63240天文单位

#include <iostream>

int main(){
    using namespace std;
    cout << "Enter the number of light years:";
    float lightyear;
    cin >> lightyear;
    float ast = lightyear * 63240;
    cout << lightyear << " light years = " << ast << " astronomical ubits.\n";
    return 0;
}