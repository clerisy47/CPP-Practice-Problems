#include <iostream>
using namespace std;

class MyClass
{
private:
    static int count; // static data member
    int data;

public:
    MyClass(int data) : data(data)
    {
        count++;
    }
    ~MyClass()
    {
        count--;
    }
    static void getCount() // static member function
    {
        cout << "Number of objects at scope currently are: " << count << endl;
    }
    void getData()
    {
        cout << "The data is: " << data << endl;
    }
};
int MyClass::count = 0;

int main()
{
    MyClass s1(5);
    s1.getData();
    MyClass::getCount();
    MyClass s2(2), s3(3);
    s2.getData();
    s3.getData();
    MyClass::getCount();
    return 0;
}
