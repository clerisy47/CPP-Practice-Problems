#include <iostream>
using namespace std;

class Student
{
protected:
    char name[50];
    int rollNo;

public:
    void input()
    {
        cin >> name;
        cin >> rollNo;
    }
    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Test : public Student
{
protected:
    int oop, toc, maths;

public:
    void input()
    {
        Student::input();
        cin >> oop;
        cin >> toc;
        cin >> maths;
    }
    void output()
    {
        Student::output();
        cout << "Marks in" << endl;
        cout << "oop: " << oop << endl;
        cout << "toc: " << toc << endl;
        cout << "maths: " << maths << endl;
    }
};

class Result : public Test
{
protected:
    int totalMarks;
    float percent;

public:
    void input()
    {
        Test::input();
    }
    void calculate()
    {
        totalMarks = oop + toc + maths;
        percent = static_cast<float>(totalMarks) / 3;
    }
    void output()
    {
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percent: " << percent << endl;
    }
};

int main()
{
    Result r;
    r.input();
    r.calculate();
    r.output();
}