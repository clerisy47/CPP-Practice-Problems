#include<iostream>//or
#include<fstream>
#include<iomanip>
using namespace std;
class transaction
{
    long int account_number;
    char lastname[20],firstname[20];
    float total_balance;
public:
    void getdata()
    {
        cout<<endl<<"Enter the following information:"<<endl;
        cout<<"Account number:\t";
        cin>>account_number;
        cin.ignore();
        cout<<endl<<"First name:\t";
        cin.getline(firstname,20);
        cout<<endl<<"Last name:\t";
        cin.getline(lastname,20);
        cout<<endl<<"Total balance:\t";
        cin>>total_balance;
    }
    void display()
    {        cout<<setiosflags(ios::left)<<setw(25)<<account_number<<setw(20)<<firstname<<setw(20)<<lastname<<setw(20)<<total_balance<<endl;
    }
};
int main()
{
    transaction tr;
    fstream file;
    int choice;
    while(1){
    cout<<"\n\nEnter your choice:"<<endl;
    cout<<"1) Create record\n";
    cout<<"2) Add record\n";
    cout<<"3) Update record\n";
    cout<<"4) Delete record\n";
    cout<<"5) Display record\n";
    cout<<"6) Exit\n";
    cout<<"Enter your choice:";
    cin>>choice;
    int record_pos,location;
    char ch;
    switch(choice)
    {
    case 1:{
        file.open("transaction.txt",ios::out|ios::binary);
       do
        {
            tr.getdata();
            file.write(reinterpret_cast<char*>(&tr),sizeof(tr));
            cout<<"Do you want to continue (y/n)?";
            cin>>ch;
        }while(ch!='n');
        file.close();
        break;
    }
    case 2:{
        file.open("transaction.txt",ios::out|ios::app|ios::binary);
        do
        {
            tr.getdata();
            file.write(reinterpret_cast<char*>(&tr),sizeof(tr));
            cout<<"Do you want to continue (y/n)?";
            cin>>ch;
        }while(ch!='n');
        file.close();
        break;
    }
    case 3:{
        file.open("transaction.txt",ios::out|ios::in|ios::binary);
        cout<<"Enter record number to be updated:";
        cin>>record_pos;
        location=(record_pos-1)*sizeof(tr);
        tr.getdata();
        file.seekp(location);
        file.write(reinterpret_cast<char*>(&tr),sizeof(tr));
        file.close();
       break;
   }
    case 4:{
        file.open("transaction.txt",ios::in|ios::binary);
        ofstream file_new("temp.txt",ios::out|ios::binary);
        cout<<"Enter record number to be deleted:";
        cin>>record_pos;
        location=(record_pos)*sizeof(tr);
        while(file.read(reinterpret_cast<char*>(&tr),sizeof(tr)))
        {
            if(file.tellg()!=location)
            {
                file_new.write(reinterpret_cast<char*>(&tr),sizeof(tr));
            }
            else
            {
                continue;
            }
        }
        file.close();
        file_new.close();
        remove("transaction.txt");
        rename("temp.txt","transaction.txt");
        break;
    }
    case 5:{
file.open("transaction.txt",ios::in|ios::binary);
        cout<<endl<<setiosflags(ios::left)<<setfill('*')<<setw(78)<<'*'<<endl;
        cout<<setfill(' ')<<setw(25)<<"Account number"<<setw(20)<<"First name"<<setw(20)<<"Last name"<<setw(20)<<"Total balance"<<endl;
        cout<<setiosflags(ios::left)<<setfill('*')<<setw(78)<<'*'<<setfill(' ')<<endl;
        while(file.read(reinterpret_cast<char*>(&tr),sizeof(tr)))
        {
            tr.display();
        }
        file.close();
        break;
    default:
        exit(0);
    }
    }
    }
}


