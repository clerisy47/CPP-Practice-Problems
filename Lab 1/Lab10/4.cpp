// A base class pointer contains address of its derived class object and
// if base class pointer goes out of scope, which destructor is called. WAP to illustrate this.

#include <iostream>
using namespace std;

class Base {
    public:
        virtual ~Base() {
            cout << "Called base class destructor" << endl;
        }
};

class Derived: public Base {
    public:
        ~Derived() {
            cout << "Called derived class destructor" << endl;
        }
};

int main() {
    Base *bp;
    bp = new Derived();
    delete bp;
    return 0;
}
