#include <iostream>
using namespace std;

class staticEg
{
private:
    static int count; // static data member
    int data;

public:
    staticEg(int data) : data(data)
    {
        count++;
    }
    ~staticEg()
    {
        count--;
    }
    static void showcount() // static member function
    {
        cout << "Number of objects at scope currently are: " << count << endl;
    }
    void showdata()
    {
        cout << "The data is: " << data << endl;
    }
};
int staticEg::count = 0;

int main()
{
    staticEg s1(5);
    s1.showdata();
    staticEg::showcount();
    staticEg s2(2), s3(3);
    s2.showdata();
    s3.showdata();
    staticEg::showcount();
    return 0;
}
