#include <iostream>
using namespace std;

class MyClass
{
private:
    int ctr;

public:
    MyClass(int ctr = 0) : ctr(ctr) {}

    int getCtr()
    {
        return ctr;
    }
    // prefix
    friend void operator++(MyClass &d)
    {
        ++d.ctr;
    }
    // postfix
    friend void operator++(MyClass &d, int) // int is a dummy variable
    {
        d.ctr++;
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