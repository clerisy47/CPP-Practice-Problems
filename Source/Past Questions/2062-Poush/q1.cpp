// Write a program to make distances class and its object. The distances class has feet and inches.
#include <iostream>
using namespace std;
class distances {
    float feet,inches;
    public:
        void input() {
            cout << "Enter the feet and inches: ";
            cin >> feet >> inches;
        }
        void display() {
            cout << feet << " feet and " << inches << " inches";
        }
};

int main() {
    distances d;
    d.input();
    d.display();
    return 0;
}
