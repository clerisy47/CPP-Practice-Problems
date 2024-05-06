/*Write a class to store x, y, and z coordinates of a point in three-dimensional space.
 Using operator overloading, write friend functions to add, and subtract the vectors.*/
#include<iostream>//or
using   namespace std;
class cls2;
class cls1
{
    int x,y,z;
public:
    cls1(int ix,int iy, int iz)
    {
        x=ix;
        y=iy;
        z=iz;
    }
    friend void operator + (cls1,cls2);
    friend void operator - (cls1,cls2);
};
class cls2
{
    int x,y,z;
public:
    cls2(int ix,int iy, int iz)
    {
        x=ix;
        y=iy;
        z=iz;
    }
    friend void operator + (cls1,cls2);
    friend void operator - (cls1,cls2);
};
void operator + (cls1 c1, cls2 c2)
{
    cout<<"Sum = ("<<c1.x+c2.x<<','<<c1.y+c2.y<<','<<c1.z+c2.z<<')'<<endl;
}
void operator - (cls1 c1, cls2 c2)
{
    cout<<"Difference = ("<<c1.x-c2.x<<','<<c1.y-c2.y<<','<<c1.z-c2.z<<')'<<endl;
}
int main()
{
    cls1 c1(1,2,3);
    cls2 c2(4,5,6);
    c1+c2;
    c1-c2;
}
 
