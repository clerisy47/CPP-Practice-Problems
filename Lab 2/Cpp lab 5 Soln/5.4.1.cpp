/*Write a class Date that uses pre increment and post increment operators 
to add 1 to the day in the Date object, while causing appropriate increments 
to the month and year (use the appropriate condition for leap year). 
The pre and post increment operators in your Date class should behave 
exactly as the built in increment operators.*/
#include <iostream>
using namespace std;
class date
{
    int y,m,d;
public:
    void get_data()
    {
        cout<<"Enter valid date.";
        cout<<endl<<"Enter year: ";
        cin>>y;
        cout<<endl<<"Enter month: ";
        cin>>m;
        cout<<endl<<"Enter day: ";
        cin>>d;
    }
    void operator++(int)
    {
        cout <<y<<":"<<m<<":"<<d++<<endl;
    }
    void operator++()
    {
        ++d;
        if (((y%4==0) && (y%100==0) && (y%400==0)) || ((y%4==0) && (y%100!=0)))
        {
            if ((m/2==1) && (29<d))
            {
                m++;
                d=d-29;
            }
        }
        else
        {
            if((m/2==1) && (28<d))
            {
                m++;
                d=d-28;
            }
        }
        if ((m%2==1) && (31<d))
        {
            m++;
            d=d-31;
        }
        if ((m%2==0) && (m/2!=1) && (30<d))
        {
            m++;
            d=d-30;
        }
        if(12<m)
        {
            m=1;
            y++;
        }
        cout <<y<<":"<<m<<":"<<d<<endl;
    }
};
int main()
{
    date yyyy;
    yyyy.get_data();
    cout<<endl<<"Prefix Operator Overloaded."<<endl;
    yyyy++;
    cout<<endl<<"Postfix Operator Overloaded."<<endl;
    ++yyyy;
    return 0;
}

