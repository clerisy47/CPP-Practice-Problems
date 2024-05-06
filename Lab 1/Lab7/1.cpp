// WAP to overload unary prefix(++) using member operator function and unary prefix(--) using friend function.

#include <iostream>
using namespace std;

class number {
    int n;
    public:
        void operator++() {
            ++n;
        }
        void display() {
            cout << n << endl;

        }
        void getinput() {
            cout << "Enter the number: ";
            cin >> n;
        }
        friend void operator --(number &);
};

void operator--(number &num) {
    --num.n;
}

int main() {
    number no;
    no.getinput();
    cout << "Before ++ operation" << endl;
    no.display();
    ++no;
    cout << "After ++ operation" << endl;
    no.display();
    cout << "After -- operation" << endl;
    --no;
    no.display();
    return 0;
}
