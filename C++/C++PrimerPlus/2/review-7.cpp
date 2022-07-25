// 2022-7-25
// 编写一个程序，要求用户输入小时数和分钟数。在main函数中，将这两个值传递给一个void函数，后者显示这些数值

#include <iostream>
void timeprint(int hour, int mins);
using namespace std;

int main(){
    cout << "please input the current hour: ";
    int hour, mins;
    cin >> hour;
    cout << "please input the current minutes: ";
    cin >> mins;
    timeprint(hour, mins);
    return 0;    
}

void timeprint(int hour, int mins){
    cout << "time: " << hour << ":" << mins;
}