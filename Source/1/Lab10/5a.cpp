// WAP that shows RTTI mechanism in C++.
// a) dynamic_cast

#include <iostream>
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
    Human *H;
    Cow *C;
    if(H=dynamic_cast<Human *>(A))
    {
        cout << "Pointing to human class" << endl;
        A->display();
    } else if((C = dynamic_cast<Cow *>(A))) {
            cout << "Pointing to Cow Class" << endl;
            A->display();
    } else {
        cout << "Pointing to Animal class." << endl;
        A->display();
    }
};

int main() {
    check(new Human());
    check(new Animal());
    check(new Cow());
    return 0;
}
