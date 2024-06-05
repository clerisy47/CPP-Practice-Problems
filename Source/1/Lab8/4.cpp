// WAP that shows the conversion from class type to basic type.

#include <iostream>
using namespace std;

class Number {
    int n;
    public:
        void display() {
            cout << n;
        }
        Number(int x): n(x) {}
        operator int() {
            return n;
        }
};

int main() {
    Number n(5);
    int a = n;
    cout << a;
    return 0;
}
