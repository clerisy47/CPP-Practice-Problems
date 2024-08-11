#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Constructor in Base1" << endl;
    }
    ~Base1()
    {
        cout << "Destructor in Base1" << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Constructor in Base2" << endl;
    }
    ~Base2()
    {
        cout << "Destructor in Base2" << endl;
    }
};

class Derived : public Base1, public Base2
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

int main()
{
    Derived d;
    return 0;
}