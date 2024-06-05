/*
Assume that an object represents an employee report that contains 
the information like employee id, total bonus, total overtime in a 
particular year. Use array of objects to represent nemployees' reports. 
Write a program that displays report. Use setpara() member

function to set report attributes by passing the arguments and member
 function displayreport() to show the reports according to parameter passed. 
 Display the report in following format.

Employee with ... ... ... has received Rs ... ... ...as bonus and

had worked ... ... ... hours as a over time in  year ... ... ...
*/
#include<iostream>//or
using namespace std;
class emp_report
{
    int emp_id,year;
    float total_bonus,total_overtime;
public:
    void setpara();
    void displayreport(emp_report emp_data[],int no_of_emp);
};
int main()
{
    int no_of_emp;
    cout<<"Enter total number of employees:\t";
    cin>>no_of_emp;
    emp_report emp[no_of_emp],disp_report;
    for(int i=0;i<no_of_emp;i++)
    {
        cout<<"\nfor emp:"<<i+1;
        emp[i].setpara();
    }
    disp_report.displayreport(emp,no_of_emp);
    return 0;
}
void emp_report::setpara ()
{
    cout<<"\nEnter your employee id:\t";
    cin>>emp_id;
    cout<<"\nEnter total amount of bonus received:\t";
    cin>>total_bonus;
    cout<<"\nEnter total amount of overtime worked:\t";
    cin>>total_overtime;
    cout<<"\nEnter the working year:\t";
    cin>>year;
}
void emp_report::displayreport(emp_report emp_data[],int no_of_emp)
{
    for(int i=0;i<no_of_emp;i++)
    {
        cout<<"\nEmployee with "<<emp_data[i].emp_id<<" has received Rs "<<emp_data[i].total_bonus<<" and had worked "<<emp_data[i].total_overtime<<" hours as a overtime in year "<<emp_data[i].year;
    }
}


