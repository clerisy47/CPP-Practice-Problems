/*Create a class called carpark that has int data member for car id, 
int data member for charge/hour and float data member for time. 
Set the data and show the charges and parked hours of corresponding car id. 
Make two member functions for setting and showing the data.
 Member function should be called from other functions.*/
#include<iostream>//or
using namespace std;
class carpark
{
    private:
        int car_id,charge_per_hour;
        float time;
    public:
        void data (int,int,float);
        void show_charge();
};
int main()
{
    int x,y;
    float z;
    carpark c1;
    cout<<"Enter your car id:\t";
    cin>>x;
    cout<<endl<<"Enter the charge per hour(i.e rate):\t";
    cin>>y;
    cout<<endl<<"Enter total parked time in hours:\t";
    cin>>z;
    c1.data(x,y,z);
    c1.show_charge();
    return 0;
}
void carpark::data(int a,int b,float c)
{
    car_id=a;
    charge_per_hour=b;
    time=c;
}
void carpark::show_charge()
{
    cout<<"\n\nCar id:\t"<<car_id<<endl;
    cout<<"Charge per hour(i.e rate):\t"<<charge_per_hour<<endl;
    cout<<"Total parked time in hour:\t"<<time<<endl;
    cout<<"Net charge:\t"<<charge_per_hour*time<<endl;
}

