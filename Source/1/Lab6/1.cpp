// WAP using friend function to compare the data member of two diffferent classes and display the largest one.

#include <iostream>
using namespace std;

class second;
class first {
    int data1;
    public:
        first(int x = 0): data1(x) {}
        friend void large(first, second);
        ~first() {}
};

class second {
    int data2;
    public:
        second(int y=0): data2(y){}
        friend void large(first, second);
        ~second() {}
};

void large(first a, second b) {
    cout << "The largest is: " << (a.data1>b.data2 ? a.data1:b.data2);
}

int main() {
    first f(1);
    second s(2);
    large(f,s);
    return 0;
}
