/*Assume that employee will have to pay 10 percent income tax to the government.
 Ask user to enter the employee salary. Use inline function to display the 
 net payment to the employee by the company.*/
 #include<iostream>//or
using namespace std;
float net(int);
int main()
{
    int s;
    cout<<"Enter your salary:\t"<<endl;
    cin>>s;
    cout<<"Net payment to the employee = "<<net(s);
}
inline float net(int a)
{
    return(a-(a*0.1));
}

