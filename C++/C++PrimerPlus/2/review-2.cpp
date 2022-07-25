// 2022-7-25
// 编写一个c++程序，它要求用户输入一个以longs为单位的距离，然后将它转换成码（1longs = 220码）

#include <iostream>

int main(){
    using namespace std;
    double longs;
    cout << "please input the length(base on long): ";
    cin >> longs;
    double yard;
    yard = longs / 220;
    cout << "you input is " << yard << " yard" << endl;
    return 0;

}