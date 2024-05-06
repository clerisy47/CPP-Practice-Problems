/*Write a class Date that uses pre increment and post increment operators 
to add 1 to the day in the Date object, while causing appropriate increments 
to the month and year (use the appropriate condition for leap year). 
The pre and post increment operators in your Date class should behave 
exactly as the built in increment operators.*/
#include<iostream>//or
using namespace std;
class Date
{
    int mm,dd,yy;
    int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
public:
    Date(int m,int d, int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void operator ++ (int)
    {
        dd=dd+1;
        if(leap_chk())
            c[1]=29;
        if(c[mm-1]<dd)
        {
            dd=1;
            mm++;
        }
        if(mm>12)
        {
            mm=1;
            yy++;
        }
    }
      void operator ++()
    {
        dd=dd+1;
        if(leap_chk())
            c[1]=29;
        if(c[mm-1]<dd)
        {
            dd=1;
            mm++;
        }
        if(mm>12)
        {
            mm=1;
            yy++;
        }
    }
    bool leap_chk()
    {
             if(yy%4==0)
                {
                    if(yy%100==0)
                    {
                        if(yy%400==0)
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                       return true;
                    }
                }
                else
                {
                    return false;
                }
    }
    void display()
    {
        cout<<mm<<'/'<<dd<<'/'<<yy<<endl;
    }
};
int main()
{
    Date d1(2,28,2020);
    d1++;
    d1.display();
    ++d1;
    d1.display();
}

