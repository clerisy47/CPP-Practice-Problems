/*Write	a	program	with Student as	abstract	class	and	create	derive
classes Engineering, Medicine and Science from base class Student. 
Create the objects of the derived classes and process them and access them 
using array of pointer of type base class Student.
*/
#include <iostream>
#include <cstring>
using namespace std;
class student
{
 private:
 protected:
  string name;
  int rank;
 public:
  virtual string getname() = 0;
  virtual int getrank() = 0;
};
class engineering : public student
{
 private:
 public:
  engineering(string n,int r){
    name= n;
    rank=r;
  }
  string getname()
  {
    return name;
  }
  int getrank()
  {
    return rank;
  }
};
class medicine: public student
{
 private:
 public:
  medicine(string n,int r){
    name=n;
    rank=r;
  }
  string getname()
  {
    return name;
  }
  int getrank()
  {
    return rank;
  }
};
class science : public student
{
 private:
 public:
  science(string n, int r){
    name = n;
    rank = r;
  }
  string getname()
  {
    return name;
  }
  int getrank()
  {
    return rank;
  }
};
int main()
{
  student* st[3];
  st[0] = new engineering("Abcd", 3);
  st[1] = new medicine("Efgh",1);
  st[2] = new science("Ijkl",2);
  cout << "Student of various field" << endl;
  for (int i = 0; i < 3; ++i)
  {
    cout << "Name " << st[i]->getname() << endl;
    cout << "Rank " << st[i]->getrank() << endl;
  }
  return 0;
}

