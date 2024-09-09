#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA
{
private:
    int dataA;

public:
    ClassA() : dataA(0) {}

    friend class ClassB;
};

class ClassB
{
public:
    void setData(ClassA &objA, int value)
    {
        objA.dataA = value;
    }

    void getData(ClassA &objA)
    {
        cout << "ClassA private member: " << objA.dataA << endl;
    }
};

int main()
{
    ClassA objA;
    ClassB objB;

    objB.setData(objA, 42);
    objB.getData(objA);

    return 0;
}
