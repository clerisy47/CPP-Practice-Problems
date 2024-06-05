// WAP that will inherit a class where member are increased by its member function.
// The derived class should override the function
// that increase its member in the derived class that will add increment of the derived class data member.
// Create other meaningful function that suit your requirement.


#include <iostream>
using namespace std;


class Number {
    protected:
        int n;
    public:
        Number():n(0) {}
        void increase() {
            n++;
        }
};

class Counter:public Number {
    int count;
    public:
        Counter(): count(0) {}
        void increase() {
            Number::increase();
            count++;
        }
        void display() {
            cout << "Count of base class = " << n << endl;
            cout << "Count of derived class = " << count << endl;
        }
};

int main() {
    Counter c;
    c.increase();
    c.display();
    c.increase();
    c.display();
    return 0;
}
