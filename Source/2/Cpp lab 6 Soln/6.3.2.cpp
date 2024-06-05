/*Create a class called Musicians to contain three methods string ( ), 
wind ( ) and perc ( ). Each of these methods should initialize a string 
array to contain the following instruments

-	veena, guitar, sitar, sarod and mandolin under string ( )
-	flute, clarinet saxophone, nadhaswaram and piccolo under wind ( )
-	tabla, mridangam, bangos, drums and tambour under perc ( )

It should also display the contents of the arrays that are initialized. 
Create a derived class called TypeIns to contain a method called get ( ) 
and show ( ). The get ( ) method must display a menu as follows

Type of instruments to be displayed
a.	String instruments
 
b.	Wind instruments
c.	Percussion instruments

The show ( ) method should display the relevant detail according to our 
choice. The base class variables must be accessible only to its derived classes.
*/
#include<iostream>//or
#include<vector>
using namespace std;
class Musicians
{
protected:
    vector<string> str,win,per;
public:
    void String ()
    {
        str={"veena","guitar","sitar","sarod","mandolin"};
        cout<<"\nstring instruments:"<<endl;
        for (int i=0;i<5;i++)
        {
            cout<<str[i]<<endl;
        }
        cout<<"\n************************************************\n";
    }
    void Wind()
    {
        win={"flute","clarinet","saxophone","nadhaswaram","piccolo"};
        cout<<"\nwind instruments:"<<endl;
        for (int i=0;i<5;i++)
        {
            cout<<win[i]<<endl;
        }
        cout<<"\n************************************************\n";
    }
    void Perc ()
    {
        per={"tabla","mridangam","bangos","drums","tambour"};
        cout<<"\npercussion instruments:"<<endl;
        for (int i=0;i<5;i++)
        {
            cout<<per[i]<<endl;
        }
        cout<<"\n************************************************\n";
    }
};
class TypeIns:public Musicians
{
    char c;
public:
    void get()
    {
        cout<<"Type of instruments to be displayed:"<<endl;
        cout<<"a. String instruments"<<endl;
        cout<<"b. Wind instruments"<<endl;
        cout<<"c. Percussion instruments"<<endl;
        cout<<"Enter your selection(a/b/c):";
        cin>>c;
    }
    void show()
    {
        switch(c)
        {
        case 'a':
            String();
            break;
        case 'b':
            Wind();
            break;
        case 'c':
            Perc();
            break;
        }
    }
};
int main()
{
    Musicians m1;
    TypeIns t1;
    m1.String();
    m1.Wind();
    m1.Perc();
    t1.get();
    t1.show();
}

