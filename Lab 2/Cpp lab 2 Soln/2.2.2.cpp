/*Write a program using the function overloading that converts feet to inches.
Use function with no argument, one argument and two arguments. 
Decide yourself the types of arguments. Use pass by reference in any 
one of the function above.*/
#include<iostream>//or
using namespace std;
float conversion();
float conversion(float);
void conversion (float,float &);
int main()
{
    float ft;
    cout<<"Enter number in feet:\t"<<endl;
    cin>>ft;
    float ans;
    float &a=ans;
    cout<<"answer from function with no parameter:\t"<<conversion ()<<endl;
    cout<<"answer from function with single parameter:\t"<<conversion (ft)<<endl;
    conversion(ft,a);
    cout<<"answer from function with two parameter:\t"<<ans<<endl;
}
void conversion (float h,float &b )
{
    b=h*12;
}
float conversion(float h)
{
    return h*12;
}
float conversion()
{
    float temp;
    cout<<"Enter value of feet for function with no argument:\t"<<endl;
    cin>>temp;
    return temp*12;
}

