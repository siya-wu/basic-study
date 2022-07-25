// 2022-7-24
// ourfunc.cpp -- defining your oen function

#include <iostream>
void simon(int); //函数原型

int main(){
    using namespace std;
    simon(3);
    cout << "Pick an interger: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n){
    using namespace std;
    cout << "Simon says touch you toes " << n << " times." << endl;
}