#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Constructor in Base" << endl;
    }
    ~Base()
    {
        cout << "Destructor in Base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor in Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor in Derived" << endl;
    }
};

class DDerived : public Derived
{
public:
    DDerived()
    {
        cout << "Constructor in DDerived" << endl;
    }
    ~DDerived()
    {
        cout << "Destructor in DDerived" << endl;
    }
};

int main()
{
    DDerived d;
    return 0;
}