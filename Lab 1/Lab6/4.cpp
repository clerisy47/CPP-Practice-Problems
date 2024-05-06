// WAP that show how the member function of one class can be friend function of another class.

#include <iostream>
using namespace std;

class B; // Forward declaration
class A {
    int x;
    public:
        void get_x() {
            cout << "Enter value of x:";
            cin >> x;
        }
        void display_x() {
            cout << "Value of x is: " << x << endl;
        }
        void exchange(B &);
};

class B {
    int y;
    public:
        void get_y() {
            cout << "Enter value of y:";
            cin >> y;
        }
        void display_y() {
            cout << "Value of y is: " << y << endl;
        }
    friend void A::exchange(B &);
};

void A::exchange(B &b) {
    int temp = x;
    x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;
    a.get_x();
    b.get_y();
    a.exchange(b);
    a.display_x();
    b.display_y();
    return 0;
    }
