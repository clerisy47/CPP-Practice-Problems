#include <iostream>
#include <iomanip>
#include <typeinfo>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show function." << endl;
    }
    virtual ~Base() {} // in polymorphism always make the destructor virtual
};

class Derived1 : public Base
{
public:
    void show() override
    {
        cout << "Derived1 class show function." << endl;
    }
};

class Derived2 : public Base
{
public:
    void show() override
    {
        cout << "Derived2 class show function." << endl;
    }
};

int main()
{
    Base *b;          // dynamic object creation
    b = new Derived1; // derived type is a type of base class
    b->show();
    cout << "Type: " << typeid(*b).name() << endl;

    if (dynamic_cast<Derived1 *>(b))
    {
        cout << "Object is of type Derived1" << endl;
    }
    else if (dynamic_cast<Derived2 *>(b))
    {
        cout << "Object is of type Derived2" << endl;
    }
    else
    {
        cout << "Object is of type Base" << endl;
    }

    b = new Derived2;
    b->show();

    b = new Base;
    b->show();

    cout << setfill('*') << setw(25) << '*' << endl;

    // same code as above
    Derived1 d1;
    Derived2 d2;
    Base b1;
    b = &d1;
    b->show();

    b = &d2;
    b->show();

    b = &b1;
    b->show();

    return 0;
}