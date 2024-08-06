#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA
{
private:
    int privateA;

public:
    ClassA() : privateA(0) {}

    friend class ClassB;
};

class ClassB
{
public:
    void setter(ClassA &objA, int value)
    {
        objA.privateA = value;
    }

    void getter(ClassA &objA)
    {
        cout << "ClassA private member: " << objA.privateA << endl;
    }
};

int main()
{
    ClassA objA;
    ClassB objB;

    objB.setter(objA, 42);
    objB.getter(objA);

    return 0;
}
