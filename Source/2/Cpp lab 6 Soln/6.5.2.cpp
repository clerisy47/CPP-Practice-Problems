/*Write base class that ask the user to enter a complex number and make a 
derived class that adds the complex number of its own with the base. 
Finally make third class that is friend of derived and calculate the 
difference of base complex number and its own complex number.*/
#include<iostream>//or
using namespace std;
class complex1
{
protected:
    int a1,b1;
public:
    complex1()
    {
        cout<<"Enter the real part for first number:  "; 
        cin>>a1;
        cout<<"Enter the imaginary part for first number:  "; 
        cin>>b1;
    }
};
class complex3;
class complex2:public complex1
{
    int a2,b2;
public:
    complex2()
    {
        cout<<endl<<"Enter the real part for second number: ";
        cin>>a2;
        cout<<"Enter the imaginary part for second number: ";
        cin>>b2;
    }
    void sum()
    {
        a2=a1+a2;
        b2=b1+b2;
        cout<<endl<<"The	sum	is:  "<<a2<<"+"<<b2<<"i"<<endl;
    }
    friend class complex3;
};
class complex3
{
    int a3,b3;
public:
    complex3()
    {
        cout<<endl<<"Enter the real part for third number: ";
        cin>>a3;
        cout<<"Enter the imaginary part for third number:  ";
         cin>>b3;
    }
    void diff(complex2 obj)
    {
        a3=a3-obj.a1;
        b3=b3-obj.b1;
    }
    void display()
    {
        cout<<endl<<"The	difference	is: "<<a3<<"+"<<b3<<"i"<<endl;
    }
};
int main()
{
    complex2 obj1;
    complex3 obj2;
    obj1.sum();
    obj2.diff(obj1);
    obj2.display();
    return 0;
}

