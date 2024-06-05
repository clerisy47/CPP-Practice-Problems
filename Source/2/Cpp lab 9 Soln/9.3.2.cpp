/*Modify the stack class given in the previous lab to add the exception 
when user tries to add item while the stack is full and when user tries 
to add item while the stack is empty. Throw exception in both of the 
cases and handle these exceptions.*/
#include<iostream>//or
using namespace std;
const int MAX=4;
class Stack
{
    int num[MAX];
    int i;
public:
    Stack():i(-1){}
    class Full{};
    class Empty{};
    void setdata(int n)
    {
        if(i>=MAX-1)
        {
            throw Full();
        }
        num[++i]=n;
    }
    int getdata()
    {
        if(i<0)
        {
            throw Empty();
        }
        return num[i--];
    }

};
int main()
{
    Stack obj;
    try
    {
        obj.setdata(1);
        obj.setdata(1);
        obj.setdata(1);
        obj.setdata(1);
        //obj.setdata(1);
        cout<<"The data are:\n"<<obj.getdata()<<endl<<obj.getdata()<<endl<<obj.getdata()<<endl<<obj.getdata()<<endl;
        //cout<<obj.getdata()<<endl;
    }
    catch(Stack::Empty)
    {
        cout<<"The Stack is empty."<<endl;
    }
    catch(Stack::Full)
    {
        cout<<"The Stack is full."<<endl;
    }
    return 0;
}


