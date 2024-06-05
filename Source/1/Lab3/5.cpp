// Write a temperature conversion program to convert celcius to Fahrenheit and vice versa.
// The choice entered by the user. Use concept of class and object.

#include <iostream>
using namespace std;

class temp {
    float c,f;
    public:
        void input(int n) {
            if(n==1) {
                cout << "Enter the celcius:";
                cin >>c;
            }
            else {
                cout << "Enter the fahrenheit:";
                cin >> f;
            }
        }
        void convert(int n) {
            if(n==1) {
                f = 1.8*c+32;
                cout << "Fahrenheit is: " << f << endl;
            } else {
                c = (f-32)/1.8;
                cout << "Celcius is: " << c;

            }
        }

};

int main() {
    cout << "Choose:" << endl
         << "1. Celcius to Farhenheit" << endl
         << "2. Fahrenheit to Celcius" << endl;

    int n;
    cin >> n;
    temp t;
    switch(n) {
        case 1:
        case 2: t.input(n);
                t.convert(n);
                break;
        default: cout << "Invalid choice" << endl;

    }
    return 0;
}




