// WAP that shows the concept of hybrid inheritance.

#include <iostream>
using namespace std;

class student {
    protected:
        int roll;
        char name[25];
    public:
        void input() {
            cout << "Enter the student name: ";
            cin.getline(name,25);
            cout << "\nEnter the roll number: ";
            cin >> roll;
        }
        void display() {
            cout << "Name: " << name << endl
                 << "Roll no: " << roll << endl;
        }
};

class Test:public student {
    protected:
        int subject1, subject2;
    public:
        void input() {
            student::input();
            cout << "Enter the marks of subject 1: ";
            cin >> subject1;
            cout << "Enter the marks of subject 2: ";
            cin >> subject2;
        }

        void display() {
            student::display();
            cout << "Marks of student 1: " << subject1 << endl;
            cout << "Marks of student 2: " << subject2 << endl;
        }
};

class Score {
    protected:
        int score;
    public:
        void input() {
            cout << "Enter the score: " << endl;
            cin >> score;
        }
        void display() {
            cout << "Score: " << score << endl;
        }
};

class Result: public Test, public Score {
    int total;
    public:
        void display() {
            Test::display();
            Score::display();
            total = subject1 + subject2;
            cout << "Total Marks:" << total <<endl;
        }
        void input() {
            Test::input();
            Score::input();
        }
};

int main() {
    Result r;
    r.input();
    r.display();
    return 0;
}
