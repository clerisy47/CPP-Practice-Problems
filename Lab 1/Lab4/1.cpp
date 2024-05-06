// WAP with a class to represent rectangle.
// The program should have constructors and other member functions to customise areas and perimeter and display area and perimeter.

#include <iostream>
using namespace std;

class Rectangle {
    float l,b;
    public:
        Rectangle() {
            cout << "Enter the length:";
            cin >> l;
            cout << "Enter the breadth:";
            cin >> b;
            }
        Rectangle(int x, int y) {
            l = x;
            b = y;
        }
        void area() {
            cout << "Area is: " << l*b << endl;
        }

        void perimeter() {
            cout << "Perimeter is: " << 2*(l+b);
        }
};

int main() {
    Rectangle r;
    r.area();
    r.perimeter();
    cout << "\nParemeterized constructor:" << endl;
    Rectangle rec(2,4);
    rec.area();
    rec.perimeter();
    return 0;
}
