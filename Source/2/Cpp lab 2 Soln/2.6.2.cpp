/*Write a program that displays the current monthly salary of chief executive officer, 
information officer, and system analyst, programmer that has 
been increased by 9, 10, 12, and 12 percentages respectively in year 2010.
 Let us assume that the salaries in year 2009 are

Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m

System analyst Rs. 24000/m
Programmer Rs. 18000/m

Make function that takes two arguments; one salary and other increment.
 Use proper default argument.*/
 #include<iostream>//or
using namespace std;
float increment(float,float);
int main()
{
    float salary,increase;
    cout<<"New salary of chief executive officer is "<<increment(35000,9)<<endl;
    cout<<"New salary of information officer is "<<increment(25000,10)<<endl;
    cout<<"New salary of chief system analyst is "<<increment(24000,12)<<endl;
    cout<<"New salary of chief Programmer is "<<increment(18000,12)<<endl;
}
float increment(float a, float b)
{
    return(a+a*(b/100));
}

