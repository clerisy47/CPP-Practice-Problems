/*Write a program that stores the information about students
 (name, student id,department and address) in a structure and then transfers
  the information to a file in your directory. Finally, retrieve the information 
  from your file and print in the proper format on your output screen.*/
#include<iostream>//or
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
    char name[20],department[20],address[20];
    int id;
public:
    void getdata()
    {
        cout<<endl<<"Name:\t";
        cin.getline(name,20);
        cout<<endl<<"Address:\t";
        cin.getline(address,20);
        cout<<endl<<"Department:\t";
        cin.getline(department,20);
        cout<<endl<<"Id:\t";
        cin>>id;
        cin.ignore();
    }
    void displaydata()
    {    cout<<setiosflags(ios::left)<<setw(20)<<name<<setw(20)<<address<<setw(20)<<department<<setw(20)<<id<<endl;
    }
};
int main()
{
    ofstream file_write;
    student st;
    student disp;
    char c;
    file_write.open("student.txt",ios::out|ios::binary);
    cout<<"Enter students data:"<<endl;
    do
    {
        st.getdata();
        file_write.write(reinterpret_cast<char*>(&st),sizeof (st));
        cout<<"Do you want to add more(y/n)?";
        cin>>c;
        cin.ignore();
    }while(c!='n');
    file_write.close();
    ifstream file_read;
    file_read.open("student.txt",ios::in|ios::binary);
    cout<<endl<<setiosflags(ios::left)<<setfill('*')<<setw(62)<<'*'<<endl;
    cout<<setfill(' ')<<setw(20)<<"Name"<<setw(20)<<"Address"<<setw(20)<<"Department"<<setw(20)<<"Id"<<endl;
    cout<<setiosflags(ios::left)<<setfill('*')<<setw(62)<<'*'<<setfill(' ')<<endl;
    while(file_read.read(reinterpret_cast<char*>(&disp),sizeof(disp)))
    {
            disp.displaydata();
    }
    file_read.close();
}

