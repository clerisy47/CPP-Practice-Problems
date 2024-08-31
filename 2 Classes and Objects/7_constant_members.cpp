#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass(int n) : data(n) {}
    void setData(int n)
    {
        data = n;
    }
    void getData() const // constant member function
    {
        cout << "data=" << data << endl;
    }
};
int main()
{
    const MyClass t1(5); // constant object
    MyClass t2(7);
    // t1.setData(9); // Error, calling non constant function
    t1.getData();  // Ok, constant function
    t2.setData(4); // Ok
    t2.getData();  // Ok
    return 0;
}
