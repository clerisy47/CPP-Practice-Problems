/*Write a program that has a class with a dynamically allocated character 
array as its data member. One object should contain "Engineers are" 
and another should contain " Creatures of logic". Member function join() 
should concatenate two strings by passing two objects as arguments. 
Display the concatenated string through a member function. Use constructors 
to allocate and initialize the data member. Also, write a destructor to free 
the allocated memory for the character array. Make your own function for 
concatenation of two strings.*/
#include<iostream>//or
#include<cstring>
using namespace std;
 class str
{
   char *sent;
   int length;
   public:
       str()
       {
           length=0;
           sent=new char[length+1];
       }
       str(char s[])
       {
           length=strlen(s);
           sent=new char[length+1];
           strcpy(sent,s);
       }
       void join(str &s1,str &s2)
       {
           length=s1.length+s2.length;
           delete sent;
           sent= new char[length+1];
           strcpy(sent,s1.sent);
           strcat(sent,s2.sent);
       }
       void display()
       {
           cout<<sent<<endl;
       }
};
int main()
{
    str s1("Engineers are"),s2(" Creatures of logic"),d;
    d.join(s1,s2);
    d.display();
}


