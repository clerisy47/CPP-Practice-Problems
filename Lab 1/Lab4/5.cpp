// WAP with class to represent complex number. The program should be able to find sum of the two complex numbers.
// The member function to calculate sum should have two objects as an argument.

#include <iostream>
using namespace std;

class complex {
    float real,imag;

    public:
        void input() {
            cout << "Enter the real part: ";
            cin >> real;
            cout << "Enter the imaginary part: ";
            cin >> imag;
        }

        void display() {
            cout << "\nThe complex number is " << real << "+" << imag << "j";
        }

        void add(complex x, complex y) {
            cout << "Adding the complex numbers";
            real = x.real + y.real;
            imag = x.imag + y.imag;
        }

};

int main() {
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3.add(c1,c2);
    c3.display();
    return 0;
}
