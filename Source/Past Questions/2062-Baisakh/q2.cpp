//Write a program that illustrate pass by reference and return by reference.

#include <iostream>
using namespace std;

int &smallest(int &a, int &b) {
    return a<b?a:b;
}

int main() {
    int a=5,b=10;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    smallest(a,b) = 50;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
    }
