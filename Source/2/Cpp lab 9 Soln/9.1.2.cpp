/*Create a function called sum ( ) that returns the sum of the elements of 
an array. Make this function into a template so it will work with any numerical 
type. Write a main ( ) program that applies this function to data of various type.*/
#include<iostream>//or
using namespace std;
template<typename T>
T sum(T *a,int n)
{
    T addition=0;
    for(int i=0;i<n;i++)
    {
        addition=addition+*(a+i);
    }
    return addition;
}
int main()
{
    int num[]={3,5,14,23,26};
    cout<<"The sum of integers is: "<<sum(num,5)<<endl<<endl;
    float fnum[]={3.5,4.3,35.46,24.67,45.66};
    cout<<"The sum of floats is: "<<sum(fnum,5)<<endl<<endl;
    return 0;
}

