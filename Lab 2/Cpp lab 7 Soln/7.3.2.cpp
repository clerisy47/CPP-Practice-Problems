/*Write	a	program	with Student as	abstract	class	and	create	derive
classes Engineering, Medicine and Science from base class Student. 
Create the objects of the derived classes and process them and access them 
using array of pointer of type base class Student.
*/
#include<iostream>//or
using namespace std;
class Student
{
public:
    virtual void getdata()=0;
    virtual void display()=0;
};
class Engineering:public Student
{
    string faculty;
public:
    void getdata()
    {
        cout<<"\nEnter your faculty:"<<endl;
        cin>>faculty;
    }
    void display()
    {
        cout<<"\nYour faculty is "<<faculty<<endl;
    }
};
class Medicine:public Student
{
    int n;
public:
    void getdata()
    {
        cout<<"\nHow many stethoscope do you have?";
        cin>>n;
    }
    void display()
    {
        cout<<"\nNumber of stethoscope = "<<n<<endl;
    }
};
class Science:public Student
{
    string ans;
public:
    void getdata()
    {
        cout<<"\nDo you love physics?";
        cin>>ans;
    }
    void display()
    {
        cout<<"\nYour answer = "<<ans<<endl;
    }
};
int main()
{
    Engineering eobj;
    Medicine mobj;
    Science sobj;
    Student *s[3];
    s[0]=&eobj;
    s[0]->getdata();
    s[0]->display();
    s[1]=&mobj;
    s[1]->getdata();
    s[1]->display();
    s[2]=&sobj;
    s[2]->getdata();
    s[2]->display();
}

