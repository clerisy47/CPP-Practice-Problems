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

class Student : public Person
{
private:
    int rollNo;

public:
    void input()
    {
        Person::input();
        cin >> rollNo;
    }
    void output()
    {
        Person::output();
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public Person
{
private:
    int salary;

public:
    void input()
    {
        Person::input();
        cin >> salary;
    }
    void output()
    {
        Person::output();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s1;
    Teacher t1;
    s1.input();
    t1.input();
    s1.output();
    t1.output();
}