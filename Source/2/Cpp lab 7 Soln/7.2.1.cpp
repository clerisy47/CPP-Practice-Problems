/*Create  a  class Person and  two  derived  classes Employee, 
and Student, inherited  from class Person.	Now	create	a   class 
Manager which	is	derived	from two base classes Employee and Student. 
Show the use of the virtual base class.*/
#include <iostream>
#include <cstring>
using namespace std;
class person
{
 private:
  string name;
 public:
  person(){}
  person(string n)
  {
    name = n;
  }
  string getname()
  {
    return name;
  }
};
class employee: virtual public person
{
 private:
  int salary;
 public:
  employee(string n, int s):person(n),salary(s){};
  int getsalary()
  {
    return salary;
  }
};
class student: virtual public person
{
 private:
  string major;
 public:
  student(string n, string m):person(n),major(m){};
  string getmajor()
  {
    return major;
  }
};
class manager:public employee, public student
{
 private:
 public:
  manager(string n, string m, int s): employee(n,s), student(n,m), person(n)
  {
  };
};
int main()
{
  manager demo("Acd Efgh","BCT",50000);
  cout << "Name: " << demo.getname() << endl;
  cout << "Major: " << demo.getmajor() << endl;
  cout << "Salary: " << demo.getsalary() << endl;
  return 0;
}

