// WAP that shows the use of pure virtual function.

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void display()=0;
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
    bp = new Derived1();
    bp ->display();
    bp = new Derived2():
    bp->display();
    return 0;
}
