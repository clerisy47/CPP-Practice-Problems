/*Write a program that has a class to represent time. 
The class should have constructors to initialize data members hour,
 minute and second to 0 and to initialize them to values passed as arguments.
  The class should have member function to add time objects and return the result 
  as time object. There should be another function to display the result in 24 hour format.*/
#include<iostream>//or
using namespace std;
class time
{
private:
    int h,m,s;
public:
    time()
    {
        h=0;
        m=0;
        s=0;
    }
    time(int dh,int dm,int ds)
    {
        h=dh;
        m=dm;
        s=ds;
    }
    time add_time(time t1,time t2)
    {
        t1.s=t1.s+t2.s;
        if(t1.s>60)
        {
            t1.m++;
            t1.s=t1.s-60;
        }
        t1.m=t1.m+t2.m;
        if(t1.m>60)
        {
            t1.h++;
            t1.m=t1.m-60;
        }
        t1.h=t1.h+t2.h;
        return t1;
    }
    void disp_result()
    {
        cout<<"Result = "<<h<<':'<<m<<':'<<s;
    }
};
int main()
{
    time t1(6,35,17),t2(7,19,59),disp;
    disp=disp.add_time(t1,t2);
    disp.disp_result();
}

