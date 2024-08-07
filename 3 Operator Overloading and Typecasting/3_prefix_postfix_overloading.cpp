#include <iostream>
using namespace std;

class Data
{
private:
    int ctr;

public:
    Data(int ctr = 0) : ctr(ctr) {}
    // prefix
    friend void operator++(Data &d)
    {
        ++d.ctr;
    }
    // postfix
    friend void operator++(Data &d, int) // int is a dummy variable
    {
        d.ctr++;
    }
    int getCtr()
    {
        return ctr;
    }
};

int main()
{
    Data d(0);
    d++;
    cout << d.getCtr() << endl;
    ++d;
    cout << d.getCtr() << endl;
    ++d;
    cout << d.getCtr() << endl;
    d++;
    cout << d.getCtr() << endl;
}