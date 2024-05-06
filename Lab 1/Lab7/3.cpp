// WAP to compare the magnitude of complex numbers by overloading <, > and == operator.

#include <iostream>
#include <cmath>
using namespace std;

class complex {
    float real,imag;
    public:
        complex(float r = 0, float i=0): real(r), imag(i) {}
        float magnitude() {
            float m = sqrt(real*real + imag*imag);
            return m;
        }
        void input() {
            cout << "Enter the real and imaginary part" << endl;
            cin >> real >> imag;
        }

        void display() {
            cout << "(" << real << "," << imag << ")";
        }

        int operator==(complex c2) {
            if(magnitude()==c2.magnitude())
                return 1;
            return 0;
        }
        int operator<(complex c2) {
            if(magnitude()<c2.magnitude())
                return 1;
            return 0;
        }
        int operator>(complex c2) {
            if(magnitude()>c2.magnitude())
                return 1;
            return 0;
        }
};

int main() {
    complex c1,c2;
    c1.input();
    c2.input();
    if(c1==c2) {
        cout << "They are equal" << endl;
    } else if (c1>c2) {
        c1.display();
        cout << " is greater than";
        c2.display();
        cout << endl;
    } else if(c1<c2) {
        c1.display();
        cout << " is less than";
        c2.display();
        cout << endl;
    }
    return 0;
}
