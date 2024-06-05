// Q7.Write a program that inherits person class to teacher and student.

#include <iostream>
using namespace std;

class Person {
    char name[25];
    int age;
    public:
        void input() {
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the age: ";
            cin >> age;
        }
        void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        }
};

class teacher: public Person {
    float salary;
    public:
        void input() {
            cout << "Enter the details of the teacher: " << endl;
            Person::input();
            cout << "Enter the salary: ";
            cin >> salary;
        }
        void display() {
            Person::display();
            cout << "Salary:" << salary;
        }
};

class student: public Person {
    float percentage;
    public:
        void input() {
            cout << "Enter the details of the student:" << endl;
            Person::input();
            cout << "Enter the percentage: ";
            cin >> percentage;
        }
        void display() {
            Person::display();
            cout << "Percentage: " << percentage << endl;
        }
};

int main() {
    student s;
    s.input();
    s.display();
    teacher t;
    t.input();
    t.display();
    return 0;
}
