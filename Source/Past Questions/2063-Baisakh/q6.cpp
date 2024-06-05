// Write a program to read and display complex numbers using stream operator overloading and addition and
// subtraction of complex numbers using operator overloading.
// Hint:a complex number has real and imaginary part as a+ib where i is (-1)^1/2.

#include <iostream>
using namespace std;

class complex {
    float real,imag;
    public:
        friend istream & operator >>(istream & ,complex &);
        friend ostream & operator <<(ostream &,complex &);
        complex operator+(complex c) {
            complex temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }
        complex operator-(complex c) {
            complex temp;
            temp.real = real-c.real;
            temp.imag = imag-c.imag;
            return temp;
        }
};

istream &operator >>(istream &is,complex &c) {
    is >> c.real >> c.imag;
    return is;
}
ostream& operator<<(ostream &os,complex &c) {
    os << "(" << c.real << "," << c.imag << ")";
    return os;
}

int main() {
    complex c1,c2,c3,c4;
    cout << "Enter the first complex number ";
    cin >> c1;
    cout << "Enter the second complex number ";
    cin >> c2;
    c3 = c1+c2;
    cout <<c1 << "+" << c2 << "=" << c3 << endl;
    c4 = c1-c2;
    cout <<c1 << "-" << c2 << "=" << c4 << endl;
    return 0;
}
