/*
Write a program that illustrate the following relationship and comment the relationships.
i)	const_object.non_const_mem_function
ii)	const_object.const_mem_function
iii)	non_const_object.non_const_mem_function
iv)	non_const_object.const_mem_function
*/
#include<iostream>//i.or
using namespace std;
class cls1
{
    int a,b;
public:
    cls1(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<"\tb="<<b<<endl;
    }
};
int main()
{
    const cls1 o1(3,4),o2(7,9);
    cout<<"For o1:\t"<<endl;
    o1.show();
    cout<<"For o2:\t"<<endl;
    o2.show();
}



