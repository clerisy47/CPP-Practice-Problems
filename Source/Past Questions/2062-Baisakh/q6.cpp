//Q.6 Write a program to compare complex numbers with relational operators.

#include <iostream>
#include <cmath>
using namespace std;

class complex {
    float real,imag;
    public:
        complex(float r=0,float i=0) {
            real = r;
            imag = i;
        }
        float magnitude() {
            return sqrt(real*real+imag*imag);
        }

        bool operator <(complex c) {
            if (this->magnitude()<c.magnitude())
                return true;
            return false;
        }
        bool operator >(complex c) {
            if (this->magnitude()>c.magnitude())
                return true;
            return false;
        }
        bool operator ==(complex c) {
            if (this->magnitude()==c.magnitude())
                return true;
            return false;
        }
        void display() {
            cout << "(" << real << "," <<imag << ")";
        }
};


int main() {
    complex c1(1,2),c2(2,3);
    if (c1<c2) {
        c1.display();
        cout << " is less than ";
        c2.display();
    } else if (c1>c2) {
        c1.display();
        cout << " is greater than";
        c2.display();
    }
    else if (c1==c2) {
        c1.display();
        cout << " is equal to ";
        c2.display();
    }
    return 0;
}

