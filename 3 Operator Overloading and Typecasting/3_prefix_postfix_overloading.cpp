#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass(int data = 0) : data(data) {}

    int getCtr()
    {
        return data;
    }
    // prefix
    friend void operator++(MyClass &d)
    {
        ++d.data;
    }
    // postfix
    friend void operator++(MyClass &d, int) // int is a dummy variable
    {
        d.data++;
    }
};

int main()
{
    MyClass d(0);
    d++;
    cout << d.getCtr() << endl;
    ++d;
    cout << d.getCtr() << endl;
    ++d;
    cout << d.getCtr() << endl;
    d++;
    cout << d.getCtr() << endl;
}