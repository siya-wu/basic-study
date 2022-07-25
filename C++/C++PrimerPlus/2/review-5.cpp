// 2022-7-25
// 编写一个程序，其中的main()调用一个用户定义的函数，以摄氏温度为参数，并返回相应的华氏温度，转换公式：华氏温度 = 1.8 * 摄氏温度 + 32.0

#include <iostream>

int main(){
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double cel;
    cin >> cel;
    double fah = 1.8 * cel + 32.0;
    cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit.\n";
    return 0;
}