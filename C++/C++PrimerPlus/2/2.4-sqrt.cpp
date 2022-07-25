// 2022-7-24
// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of you home: ";
    cin >> area;
    double side;
    side = sqrt(area); //sqrt函数：开平方根
    cout << "That's the equivalent of a square " << side << "feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}