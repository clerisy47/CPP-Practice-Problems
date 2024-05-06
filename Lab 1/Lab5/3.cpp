// Write a class with member variable, roll, name and marks in 5 subjects as an array of float and
// a member function to display the state of the object on the source.
// Use DMA to allocate memory for second member variable in a default and parameterized constructor.
// Also show how a pointer to object can be used to call the member function.


#include <iostream>
#include <string.h>

using namespace std;

class student {
    int roll;
    char *name;
    float marks[5];
    public:
        student() {
            name = new char[1];
        }
        student(char *n) {
            int l = strlen(n);
            name = new char[l];
            strcpy(name,n);
        }


        void read() {
            cout << "Enter the name:";
            cin >> name;
            cout << "Enter the roll no.";
            cin >> roll;
            cout << "Enter the marks of the subjects" << endl;
            for (int i=0;i<5;i++) {
                cout << "Marks "<< i+1 <<":";
                cin >> marks[i];
            }
        }
        void display() {
            cout << "\nName:" << name;
            cout << "\nRoll no:" << roll << endl;
            for (int j=0;j<5;j++)
                cout << "Marks of subject["<< j+1<<"] = " << marks[j] << endl;
        }

};

int main() {
    student *s;
    s = new student("amit");
    s->read();
    s->display();
    return 0;
}
