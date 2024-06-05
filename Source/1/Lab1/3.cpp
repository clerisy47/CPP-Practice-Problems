// 3. Write a temperature conversion program from celcius to farhenheit and vice-versa depending on choice by the user.

#include <iostream>
using namespace std;

int main() {
    int n,c,f;
    cout << "Enter your choice\n";
    cout << "1. Celcius to Fahrenheit" << endl
         << "2. Farhenheit to Celcius" << endl;
    cin >> n;
    switch(n) {
        case 1: cout << "Enter the temp in celcius: ";
                cin >> c;
                f  = 1.8 * c + 32;
                cout << "Fahrenheit = " << f;
                break;

        case 2: cout << "Enter the temp in fahrenheit:";
                cin >> f;
                c = (f-32)/1.8;
                cout << "Celcius = " << c;
                break;
        default: cout << "Invalid choice";
    }
    return 0;
}
