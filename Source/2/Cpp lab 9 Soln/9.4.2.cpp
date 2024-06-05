/*Write any program that demonstrates the use of multiple catch handling, 
re-throwing an exception, and catching all exception.*/
#include<iostream>//or
using namespace std;
class Check
{
    int x;
    public:
    Check()
    {
        cout<<"Enter a number between 0 and 100: ";
        cin>>x;
    }
    class Smaller{};
    class Larger{};
    void check()
    {
        try
        {
            if(x<0)
            {
                throw Smaller();
            }
            if(x>100)
            {
                throw Larger();
            }
        }
        catch(Larger)
        {
            cout<<"Rethrowing greater exception"<<endl;
            throw;
        }
    }
};
int main()
{
    Check obj;
    try
    {
        obj.check();
        cout<<"The number is valid"<<endl;
    }
    catch(Check::Smaller)
    {
        cout<<"The number is less than 0"<<endl;
    }
    catch(Check::Larger)
    {
        cout<<"The number is greater than 100"<<endl;
    }
    return 0;
}

