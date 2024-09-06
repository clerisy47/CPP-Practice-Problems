#include <iostream>
using namespace std;

class myClass
{
private:
    int data;

public:
    myClass() : data(0) {}

    int getData()
    {
        return data;
    }

    friend void setData(myClass &obj, int value);
};

// Friend function definition
void setData(myClass &obj, int value)
{
    obj.data = value;
}

int main()
{
    myClass objA;

    setData(objA, 42);
    objA.getData();

    return 0;
}
