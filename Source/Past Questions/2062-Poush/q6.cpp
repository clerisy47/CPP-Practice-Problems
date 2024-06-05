// Write a program that converts a data of a class with inch and feet(user defined) to inches(float).

#include <iostream>
using namespace std;
class length {
    float feet,inches;
    public:
        length() {
            feet = 0.0;
            inches = 0.0;
        }
        length(float f,float i) {
            feet = f;
            inches = i;
        }
        operator float() {
            float temp;
            temp = feet*12 + inches;
            return temp;
        }
        void display() {
            cout << "(" << feet << "," << inches << ")" << endl;
        }
};

int main() {
    length d(1,12);
    d.display();
    float inches;
    inches = d;
    cout << "Length in inches is: " << inches;
    return 0;
}
