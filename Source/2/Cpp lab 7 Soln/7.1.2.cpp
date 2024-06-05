/*Write a program to create a class shape with functions to find area of the shapes 
and display the name of the shape and other essential component of the class. 
Create derived classes circle, rectangle and trapezoid each having overridden 
functions area and display. Write a suitable program to illustrate virtual 
functions and virtual destructor.*/
#include<iostream>//or
#define PI 3.141592
using namespace std;
class shape
{
public:
    virtual void getdata()=0;
    virtual void area()=0;
    virtual void display()=0;
    virtual ~shape()
    {
        cout<<"Base class destructor called"<<endl;
    }
};
class circle:public shape
{
    float r,a;
public:
    void getdata()
    {
        cout<<endl<<"Enter the radius:";
        cin>>r;
    }
    void area()
    {
        a=PI*r*r;
    }
    void display()
    {
        cout<<"\nArea="<<a<<endl;
        cout<<"Circle"<<endl;
    }
    ~circle()
    {
        cout<<"Circle class destructor called"<<endl;
    }
};
class rectangle:public shape
{
    float l,b,a;
public:
    void getdata()
    {
        cout<<endl<<"Enter length:";
        cin>>l;
        cout<<"\nEnter breadth:";
        cin>>b;
    }
    void area()
    {
        a=l*b;
    }
    void display()
    {
        cout<<"\nArea="<<a<<endl;
        cout<<"Rectangle"<<endl;
    }
    ~rectangle()
    {
        cout<<"Rectangle class destructor called"<<endl;
    }
};
class trapezoid:public shape
{
    float l1,l2,h,a;
public:
    void getdata()
    {
        cout<<endl<<"Enter the length of first parallel side:";
        cin>>l1;
        cout<<"\nEnter the length of the second parallel side:";
        cin>>l2;
        cout<<"\nEnter the height:";
        cin>>h;
    }
    void area()
    {
        a=h*(l1+l2)/2;
    }
    void display()
    {
        cout<<"Area="<<a<<endl;
        cout<<"Trapezoid"<<endl;
    }
    ~trapezoid()
    {
        cout<<"Trapezoid class destructor called"<<endl;
    }
};
int main()
{
    shape *bobj;
    bobj=new circle;
    bobj->getdata();
    bobj->area();
    bobj->display();
    delete bobj;
    bobj=new rectangle;
    bobj->getdata();
    bobj->area();
    bobj->display();
    delete bobj;
    bobj=new trapezoid;
    bobj->getdata();
    bobj->area();
    bobj->display();
    delete bobj;
    return 0;
}

