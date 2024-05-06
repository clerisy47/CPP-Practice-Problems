/*Create  a  class Person and  two  derived  classes Employee, 
and Student, inherited  from class Person.	Now	create	a   class 
Manager which	is	derived	from two base classes Employee and Student. 
Show the use of the virtual base class.*/
#include<iostream>//or
#include<conio.h>
using namespace std;
class Person
{
    int age;
public:
    void person_getdata()
    {
        cout<<"Enter person's age:";
        cin>>age;
    }
    void person_disp()
    {
        cout<<"\nAge="<<age<<endl;
    }
};
class Employee:virtual public Person
{

    int emp_id;
    public:
    void employee_getdata()
    {
        cout<<endl<<"Enter employee id:";
        cin>>emp_id;
    }
    void employee_disp()
    {
        cout<<"\nEmployee id="<<emp_id<<endl;
    }
};
class Student:virtual public Person
{
    int roll_no;
public:
    void student_getdata()
    {
        cout<<endl<<"Enter student's roll number:";
        cin>>roll_no;
    }
    void student_disp()
    {
        cout<<"\nRoll number="<<roll_no<<endl;
    }
};
class Manager:public Student,public Employee
{
    string company_name;
public:
    void manager_getdata()
    {
        cout<<endl<<"Enter company name:";
        cin>>company_name;
    }
    void manager_disp()
    {
        cout<<"\nCompany name="<<company_name<<endl;
    }
};
int main()
{
    Manager mobj;
    mobj.person_getdata();
    mobj.employee_getdata();
    mobj.student_getdata();
    mobj.manager_getdata();
    system("cls");
    mobj.person_disp();
    mobj.employee_disp();
    mobj.student_disp();
    mobj.manager_disp();
    return 0;
}


