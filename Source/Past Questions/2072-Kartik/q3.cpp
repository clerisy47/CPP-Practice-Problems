// Write a program to calculate and display the cube of integer, float and double
// number using function overloading (passing single argument to the function).

#include <iostream>
using namespace std;

int cube(int n) {
    return n*n*n;
}

float cube(float n) {
    return n*n*n;
}

double cube(double n) {
    return n*n*n;
}


int main() {
    int a = 3;
    float b = 4.5;
    double c = 6.7;
    cout << "Cube of " << a << " is " << cube(a) << endl;
    cout << "Cube of " << b << " is " << cube(b) << endl;
    cout << "Cube of " << c << " is " << cube(c) << endl;
    return 0;
}
