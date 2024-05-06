// Create a class complex with two member variables real and imaginary of type float. Write default, parameterized and copy constructors.
// Make necessary function to display state of the object on the screen.

#include <iostream>
using namespace std;

class complex {
    float real,imag;

    public:
        complex() {
            cout << "Invoked default constructor." << endl;
            cout << "Enter the real part: ";
            cin >> real;
            cout << "Enter the imaginary part: ";
            cin >> imag;
        }

        complex(float x, float y) : real(x),imag(y) { cout << "\nInvoked parameterized constructor";}
        complex(complex &c) : real(c.real), imag(c.imag) { cout << "\nInvoked copy constructor";}

        void display() {
            cout << "\nThe complex number is " << real << "+" << imag << "j";
        }

};

int main() {
    complex c;
    c.display();
    complex cp(2,3);
    cp.display();
    complex d= cp;
    d.display();
    return 0;
}
