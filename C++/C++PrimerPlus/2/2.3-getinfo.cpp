// 2022-7-24
// getinfo.cpp -- input and output

#include <iostream>

int main() {
    using namespace std;
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;  //get the input and give the value to carrots
    carrots = carrots - 2;
    cout << "Now you have " << carrots <<  " carrots." << endl;
    return 0;
}