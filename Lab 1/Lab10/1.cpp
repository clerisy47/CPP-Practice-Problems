// WAP that shows runtime polymorphism in C++.

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void display() {
            cout << "Called from base class." << endl;
        }
};

class Derived1: public Base {
    public:
        void display() {
            cout << "Called from derived class 1." << endl;
        }

};

class Derived2: public Base {
    public:
        void display() {
            cout << "Called from derived class 2." << endl;
        }

};

int main() {
    Base *bp;
    bp = new Base();
    bp->display();
    bp = new Derived1();
    bp->display();
    bp = new Derived2();
    bp->display();
    return 0;
}



