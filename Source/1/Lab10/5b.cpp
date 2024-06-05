// WAP that shows RTTI mechanism in C++.
// b) typeid

#include <iostream>
#include <typeinfo>
using namespace std;

class Animal {
    public:
        virtual void display() {
            cout << "Animal class" << endl;
        }
};

class Human: public Animal {
    public:
        void display() {
            cout << "Human class" << endl;
        }
};

class Cow: public Animal {
    public:
        void display() {
            cout << "Cow class" << endl;
        }
};

void check(Animal *A) {
    cout << "Animal pointer pointing to class: " << typeid(*A).name() << endl;
};

int main() {
    check(new Human());
    check(new Animal());
    check(new Cow());
    return 0;
}
