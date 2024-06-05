// Write a program that illustrates constructors with initializer list.
#include <iostream>
using namespace std;

class Complex {
    float real,imag;
    public:
        Complex():real(0.0),imag(0.0) {}
        Complex(float r, float i): real(r),imag(i) {}
        void display() {
            cout << "(" << real << "," << imag << ")";
        }
};


int main() {
    Complex c1(1,2);
    c1.display();
    return 0;
}
