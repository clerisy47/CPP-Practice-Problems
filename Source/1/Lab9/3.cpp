// WAP with three classes student, test and result by using multilevel inheritance.
// Assume necessary data members and functions yourself
// and program with input information, input data and calculate marks, total and display the result.


#include <iostream>
using namespace std;

class student {
    protected:
        int roll;
        char name[25];
    public:
        void input() {
            cout << "Enter the student name:";
            cin.getline(name,25);
            cout << "Enter the roll number";
            cin >> roll;
        }
        void display() {
            cout << "Name:" << name << endl
                 << "Roll no: " << roll << endl;
        }
};

class Test:public student {
    protected:
        int subject1, subject2;
        public:
            void input() {
                student::input();
                cout << "Enter the marks of subject 1:";
                cin >> subject1;
                cout << "Enter the marks of subject 2:" << endl;
                cin >> subject2;
            }
            void display() {
                student::display();
                cout << "Marks of subject 1:" << subject1 << endl;
                cout << "Marks of subject 2:" << subject2 << endl;
            }
};

class Result: public Test {
    int total;
    public:
        void display() {
            Test::display();
            total = subject1 + subject2;
            cout << "Total marks: " << total << endl;
        }
        void input() {
            Test::input();
        }
};

int main() {
    Result r;
    r.input();
    r.display();
    return 0;
}
