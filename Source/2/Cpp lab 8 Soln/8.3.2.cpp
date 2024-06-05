/*Write a program to overload stream operators to read complex 
number and display the complex number in a+ib format.*/
#include<iostream>//or
using namespace std;
class complex
{
   int real,imag;
   public:
       complex(){};
       friend istream& operator >> (istream&,complex&);
       friend ostream& operator <<(ostream&,complex&);
};
istream& operator>>(istream& in,complex& obj)
{
    cout<<"Enter the complex nunmber:"<<endl;
    cout<<"Real part:";
    in>>obj.real;
    cout<<"Imaginary part:";
    in>>obj.imag;
    return in;
}
ostream& operator<< (ostream& out,complex& obj)
{
    out<<"Entered complex number:"<<obj.real<<" + "<<obj.imag<<" i";
    return out;
}
int main()
{
    complex num;
    cin>>num;
    cout<<num;
}


