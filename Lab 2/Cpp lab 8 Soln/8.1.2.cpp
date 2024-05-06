/*Write a program to demonstrate the use of different ios flags 
and functions to format the output. Create a program to generate 
the bill invoice of a department store by using different formatting.*/
#include<iostream>//or
#include<conio.h>
#include<iomanip>
using namespace std;
class Bill
{
    string *item_name;
    int *item_quantity,n;
    float *item_rate,*total_price;
public:
    void getdata()
    {
        cout<<"Enter the no of items:";
        cin>>n;
        item_name = new string[n];
        item_quantity = new int[n];
        item_rate=new float[n];
        total_price= new float[n];
        for(int i=0;i<n;i++)
        {
            cin.ignore();
            cout<<endl<<"Enter item name:\t";
            getline(cin,item_name[i]);
            cout<<endl<<"Enter item quantity:\t";
            cin>>item_quantity[i];
            cout<<endl<<"Enter item rate:\t";
            cin>>item_rate[i];
            total_price[i]=item_quantity[i]*item_rate[i];
        }
    }
    void display()
    {
        int total=0;
        system("cls");
        cout<<right<<setfill('*')<<setw(62)<<"WELCOME"<<setw(55)<<' '<<endl;
        cout<<left<<setfill(' ')<<setw(15)<<"S.N"<<setw(25)<<"Item name"<<setw(25)<<"Item quantity"<<setw(25)<<"Item rate"<<setw(25)<<"Total price"<<endl;
        for(int i=0;i<n;i++)
        {       cout<<left<<setw(15)<<i+1<<setw(25)<<item_name[i]<<setw(25)<<item_quantity[i]<<setw(25)<<item_rate[i]<<setw(25)<<total_price[i]<<endl;
            total+=total_price[i];
        }
        cout<<right<<setw(96)<<"----------"<<endl;
        cout<<right<<setw(91  )<<total;
    }
};
int main()
{
    Bill b;
    b.getdata();
    b.display();
}

