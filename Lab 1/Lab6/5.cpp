// Write a meaningful program that shows the concept of friend class.

#include <iostream>
#include <string.h>
using namespace std;

class B;
class A {
    int data1;
    public:
        A(int x=0): data1(x) {}
    void showdata(B);
    friend class B;
};

class B {
    int data2;
    public:
        B(int y=0):data2(y) {}
        void showdata(A obja) {
            cout << "Object of b showing value: " << obja.data1 << endl;
        }
        friend class A;
};

void A::showdata(B objb) {
    cout << "Object of a showing value:" << objb.data2 << endl;
}

int main() {
    A a(1);
    B b(2);
    cout << "Passing value of a = 1 and b = 2" << endl;
    a.showdata(b);
    b.showdata(a);
    return 0;
    }
