#include <iostream>
using namespace std;

class Person
{
protected:
    char name[50];
    char address[50];
    char contact[50];

public:
    void input()
    {
        cin >> name >> address >> contact;
    }
    void output()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "Contact " << contact << endl;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    void input()
    {
        cin >> rollNo;
    }
    void output()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

class Employee : virtual public Person
{
protected:
    int salary;

public:
    void input()
    {
        cin >> salary;
    }
    void output()
    {
        cout << "Salary: " << salary << endl;
    }
};

class Youth : public Student, public Employee
{
public:
    void input()
    {
        Person::input(); // ambiguous if Student and Employee didn't inheret Person as virtual class
        Student::input();
        Employee::input();
    }
    void output()
    {
        Person::output(); // ambiguous if Student and Employee didn't inheret Person as virtual class
        Student::output();
        Employee::output();
    }
};

int main()
{
    Youth y1;
    y1.input();
    y1.output();
}