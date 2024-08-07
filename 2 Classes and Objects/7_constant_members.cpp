#include <iostream>
using namespace std;

class constantEg
{
private:
    int data;

public:
    constantEg() : data(0) {}
    constantEg(int n) : data(n) {}
    void setdata(int n)
    {
        data = n;
    }
    void showdata() const // constant member function
    {
        cout << "data=" << data << endl;
    }
};
int main()
{
    const constantEg t1(5); // constant object
    constantEg t2(7);
    // t1.setdata(9); // Error, calling non constant function
    t1.showdata(); // Ok, constant function
    t2.setdata(4); // Ok
    t2.showdata(); // Ok
    return 0;
}
