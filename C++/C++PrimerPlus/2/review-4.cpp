// 2022-7-25
// 编写一个程序，让用户输入其年龄，然后显示该该年龄包含多少个月，如下所示：
// enter your age: 29
// your age in months is 348

#include <iostream>
int main(){
    using namespace std;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    age = age * 12;
    cout << "Your age is " << age << endl;
    return 0; 
}