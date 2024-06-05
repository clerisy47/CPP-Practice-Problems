/*Create a class with a data member to hold "serial number" for each object
 created from the class. That is, the first object created will be numbered 1,
  the second 2 and so on by using the basic concept of static data members. 
  Use static member function if it is useful in any of the member functions
   declared in the program. Otherwise make separate program that demonstrate the 
   use of static member function.*/
#include<iostream>//or
using namespace std;
class clas1
{
    static int serialNumber;
public:
    clas1()
    {
        serialNumber++;
    }
     static void showNum(void)
    {
        cout<<"object serial number:\t"<<serialNumber<<endl;
    }
};
int clas1::serialNumber=0;
int main()
{
    clas1 ob1;
    clas1::showNum();
    clas1 ob2;
    clas1::showNum();
    clas1 ob3;
    clas1::showNum();
}

