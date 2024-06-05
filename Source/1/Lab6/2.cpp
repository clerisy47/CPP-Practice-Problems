// WAP to add member of objects of two different classes using friend function.

#include <iostream>
using namespace std;

class second;
class first {
    int data1;
    public:
        first(int x=0): data1(x) {}
        friend void add(first, second);
        void display() {
            cout << data1;
        }

};

class second {
    int data2;
    public:
        second(int y=0): data2(y) {}
        void display() {
            cout << data2;
        }
        friend void add(first, second);
};

void add(first a, second b) {
    cout << a.data1 + b.data2;
}

int main() {
    first f(1);
    second s(2);
    f.display();
    cout << " + ";
    s.display();
    cout << " = ";
    add(f, s);
    return 0;
}
