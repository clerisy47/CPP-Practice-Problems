/*Write a program to set a structure to hold a date (mm,dd and yy),
 assign values to the members of the structure and print out the values
in the format 11/28/2004 by function. Pass the structure to the function.*/
#include<iostream>//or
using namespace std;
struct miti
{
    int dd,mm,yy;
};
void disp(miti);
int main()
{
    miti m;
    cout<<"Enter day:\t";
    cin>>m.dd;
    cout<<"\nEnter month:\t";
    cin>>m.mm;
    cout<<"\nEnter year:\t";
    cin>>m.yy;
    disp(m);
}
void disp(miti d)
{
    cout<<endl<<d.mm<<'/'<<d.dd<<'/'<<d.yy<<endl;
}

