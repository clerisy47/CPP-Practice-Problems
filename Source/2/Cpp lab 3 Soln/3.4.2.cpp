/*Write a program with classes to represent circle,
 rectangle and triangle. Each classes should have data members 
 to represent the actual objects and member functions to read and display 
 objects, find perimeter and area of the objects and other useful functions.
  Use the classes to create objects in your program.*/
#include<iostream>//or
#include<math.h>
#define PI 3.14156
using namespace std;
class circle
{
private:
    float radius;
public:
    void data (float x)
    {
        radius=x;
    }
    void calculations();
};
class rectangle
{
private:
    float length,breadth;
public:
    void data (float x,float y)
    {
        length=x;
        breadth=y;
    }
    void calculations();
};
class triangle
{
private:
    float l1,l2,l3;
public:
    void data (float x,float y,float z)
    {
        l1=x;
        l2=y;
        l3=z;
    }
    void calculations();
};
int main()
{
    class circle c;
    class rectangle rec;
    class triangle t;
    float r,l,b,l1,l2,l3;
    cout<<"For circle:"<<endl<<"Enter radius:\t";
    cin>>r;
    cout<<"\n\nFor rectangle:"<<endl<<"Enter length:\t";
    cin>>l;
    cout<<"\nEnter breadth:\t";
    cin>>b;
    cout<<"\n\nFor triangle:"<<endl<<"Enter length of first side:\t";
    cin>>l1;
    cout<<"\nEnter length of second side:\t";
    cin>>l2;
    cout<<"\nEnter length of third side:\t";
    cin>>l3;
    c.data(r);
    c.calculations();
    rec.data(l,b);
    rec.calculations();
    t.data(l1,l2,l3);
    t.calculations();
    return 0;
}
void circle::calculations()
{
    cout<<"\n\nFor circle:"<<endl<<"Radius:\t"<<radius<<endl;
    cout<<"Perimeter:\t"<<(2*PI*radius)<<endl;
    cout<<"Area:\t"<<(PI*radius*radius)<<endl;
}
void rectangle::calculations()
{
    cout<<"\n\nFor rectangle:"<<endl<<"Length:\t"<<length<<endl;
    cout<<"Breadth:\t"<<breadth<<endl;
    cout<<"Perimeter:\t"<<2*(length+breadth)<<endl;
    cout<<"Area:\t"<<(length*breadth)<<endl;
}
void triangle::calculations()
{
    float area,p;
    p=(l1+l2+l3)/2;
    area=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    cout<<"\n\nFor triangle:"<<endl<<"Length of first side:\t"<<l1<<endl;
    cout<<"Length of second side:\t"<<l2<<endl;
    cout<<"Length of third side:\t"<<l3<<endl;
    cout<<"Perimeter:\t"<<2*p<<endl;
    cout<<"Area=:\t"<<area<<endl;
}




