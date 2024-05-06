// WAP to achieve operation like c2 = 2 + c1, where c1 and c2 are complex numbers.
// Also for c2 = c1 + 2 using operator overloading.

#include <iostream>
using namespace std;

class complex {
    float real,imag;

    public:
        complex():real(0),imag(0) {}
        complex(float x, float y): real(x),imag(y) {}
        void display() {
            cout << "(" << real << "," << imag << ")";
        }
        friend complex operator+(complex,complex);
        friend complex operator+(int,complex);

};

complex operator+(complex a, complex b) {
    complex temp;
    temp.real = a.real+b.real;
    temp.imag = a.imag+b.imag;
    return temp;
}

complex operator+(int n, complex b) {
    complex temp;
    temp.real = n+b.real;
    temp.imag = n+b.imag;
    return temp;
}

int main() {
    complex c1(1,2),c2(1,2),c3;
    c3 = c1 + c2;
    c1.display();
    cout << "+";
    c2.display();
    cout << "=";
    c3.display();
    cout << endl;
    cout << "2 +";
    c1.display();
    cout << " = ";
    c3 = 2 + c1;
    c3.display();
    return 0;
}
