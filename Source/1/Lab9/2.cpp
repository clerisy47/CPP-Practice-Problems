// WAP to show ambiguity and its resolution in multiple inheritance.

#include <iostream>
using namespace std;

class Base1 {
    protected:
        int x;
    public:
        void display() {
            cout <<  "Member of base class 1:" << x << endl;
        }
        void input() {
            cout << "Enter member of base class 1:" << endl;
            cin >> x;
        }

};


class Base2 {
    protected:
        int y;
    public:
        void display() {
            cout << "Member of base class 2: " << y << endl;
        }
        void input() {
            cout << "Enter the member of base class 2: " << endl;
            cin >> y;
        }
};

class Derived: public Base1, public Base2 {
    int z;
    public:
        void display() {
            cout << "Member of derived class: " << z << endl;
        }
        void input() {
            cout << "Enter member of derived class:" << endl;
            cin >> z;
        }
};

int main() {
    Derived d;
    d.Base1::input();
    d.Base2::input();
    d.input();
    d.Base1::display();
    d.Base2::display();
    d.display();
    return 0;
}
