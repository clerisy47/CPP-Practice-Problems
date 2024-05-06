// WAP that will have a class with members name, roll number, directory, filename and other member functions as required.
// All of the objects will share two members directory and filename where the information of student is stored.

#include <iostream>
using namespace std;

class student {
    char name[30];
    int rollno;
    public:
        static char directory[100];
        static char filename[50];
        void input() {
            cout << "Enter the name:";
            cin >> name;
            cout << "Enter the roll no:";
            cin >> rollno;
        }
        void output() {
            cout << "\n Name:" << name
                 << "\n Roll no:" << rollno
                 << "\n Directory:" << directory
                 << "\n Filename:" << filename;
        }

};

char student::filename[50] = "2071.txt";
char student::directory[100] = "/KEC/";

int main() {
    student s1;
    s1.input();
    s1.output();
    return 0;
}
