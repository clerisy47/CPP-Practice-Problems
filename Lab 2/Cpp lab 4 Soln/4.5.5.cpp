/*
Write a program that illustrate the following relationship and comment the relationships.
i)	const_object.non_const_mem_function
ii)	const_object.const_mem_function
iii)	non_const_object.non_const_mem_function
iv)	non_const_object.const_mem_function
*/
#include<iostream>//iv.or
using namespace std;
class cls1
{
    int a,b,sum;
public:
    cls1(int x, int y)
    {
        a=x;
        b=y;
        sum=0;
    }
    void add() const
    {
        sum=a+b;
    }
    void show() const
    {
        cout<<"Sum = "<<sum<<endl;
    }
};
int main()
{
    cls1 o1(3,4);
    o1.add();
    o1.show();
}

