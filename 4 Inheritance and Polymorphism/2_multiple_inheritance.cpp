#include <iostream>
using namespace std;

class Person
{
protected:
    char name[50];
    char address[50];
    char contact[50];
    int age;

public:
    void input()
    {
        cin >> name >> address >> contact;
    }
    void output()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "Contact: " << contact << endl;
    }
};

class Employee
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

class Manager : public Person, public Employee
{
private:
    char department[50];

public:
    void input()
    {
        Person::input();
        Employee::input();
        cin >> department;
    }
    void output()
    {
        Person::output();
        Employee::output();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m1;
    m1.input();
    m1.output();
}