/*Write a program that can convert the Distance (meter, centimeter) 
to meters measurement in float and vice versa. Make a class distance 
with two data members, meter and centimeter. You can add function members 
as per your requirement.*/
#include<iostream>//or
using namespace std;
class distanc
{
    float meter ,centimeter;
public:
    distanc(float m,float cm)
    {
        meter=m;
        centimeter=cm;
    }
    distanc(float m)
    {
        meter=m;
        centimeter=0;
    }
    operator float()
    {
        return (meter+(centimeter/100));
    }
    void display()
    {
        int m;
        float c;
        m=static_cast<int>(meter);
        c=(meter-m)*100;
        cout<<m<<" meter , "<<c<<" centimeter"<<endl;
    }
};
int main()
{
    distanc d1(2.1,56.5),d2(.563);
    float disp;
    d2.display();
    disp=d1;
    cout<<"meter = "<<d1;
}

