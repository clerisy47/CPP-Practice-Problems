/*Write a class that can store Department ID and Department Name with constructors 
to initialize its members. Write destructor member in the same class and
 display the message "Object n goes out of the scope". Your program should be 
 made such that it should show the order of constructor and destructor invocation.*/
#include<iostream>//or
using namespace std;
class depart
{
    string depart_id,depart_name;
    static int c;
    int n;
    public:
    depart(string id,string name)
    {
        depart_id=id;
        depart_name=name;
        n=++c;
        cout<<"Object"<<n<<" created"<<endl;
    }
    ~depart()
    {
        cout<<"Object"<<n<<" goes out of scope"<<endl;
    }
};
int depart::c=0;
int main()
{
    depart d1("A35","Computer"),d2("A36","Mechanical"),d3("A37","Architecture");
}


