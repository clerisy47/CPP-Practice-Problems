// WAP that shows the use of constant member function and constant object.

#include <iostream>
using namespace std;

class number {
    int n;
    const int count = 0;
    public:
        number(int x) {
            cout << "Created a object" << endl;
            n = x;
        }
        void increasenumber() {
            n++;
        }
        void displaycount() const
        {
            cout << "Constant member function." << endl;
            cout << "Count=" << count << endl;
        }
        void displaynumber() const {
            cout << "Number is:" << n << endl;
        }
        void displayboth()
        {
            cout << "Count=" << count
                 << " Number = " << n << endl;
        }

};

int main()
{
    number d1(1);
    cout << "Normal object:" << endl;
    d1.displaycount();
    d1.displayboth();
    d1.increasenumber();
    d1.displayboth();
    cout << "\nConstant object" << endl;
    const number d2(5);
    d2.displaycount();
    d2.displaynumber();
    // d2.displayboth(); will give error
    return 0;
}

