#include <iostream>
using namespace std;

class ClassA
{
private:
    int dataA;

public:
    ClassA() : dataA(0) {}

    friend void setter(ClassA &obj, int value);
    friend void getter(const ClassA &obj);
};

// Friend function definition
void setter(ClassA &obj, int value)
{
    obj.dataA = value;
}

void getter(const ClassA &obj)
{
    cout << "ClassA private member: " << obj.dataA << endl;
}

int main()
{
    ClassA objA;

    setter(objA, 42);
    getter(objA);

    return 0;
}
