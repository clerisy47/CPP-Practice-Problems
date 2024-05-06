/*Create	a	polymorphic	class Vehicle and	create	other	derived classes 
Bus, Car and Bike from Vehicle.  With  this  program  illustrate	
RTTI	by  the  use of dynamic_cast and typeid operators.*/
#include <iostream>//or
#include <cstring>
#include <typeinfo>
using namespace std;
class Vehicle
{
protected :
    string vec_name;
    int no_of_wheels;
public:
    Vehicle(string name, int wheels)
    {
        vec_name=name;
        no_of_wheels=wheels;
    }
    void display()
    {
        cout<<"From Vehicle:"<<endl;
        cout<<"name ="<<vec_name<<endl<<"no of wheels="<<no_of_wheels<<endl<<endl;
    }
};
class Bus:public Vehicle
{
    int bus_id;
public:
    Bus (string name, int wheels,int id):Vehicle(name,wheels)
    {
        bus_id=id;
    }
    void display()
    {
        cout<<"From Bus:"<<endl;
        cout<<"name ="<<vec_name<<endl<<"no of wheels="<<no_of_wheels<<endl<<"bus id ="<<bus_id<<endl<<endl;
    }
};
class Car:public Vehicle
{
    int car_id;
public:
    Car (string name, int wheels,int id):Vehicle(name,wheels)
    {
        car_id=id;
    }
    void display()
    {
        cout<<"From Car:"<<endl;
        cout<<"name ="<<vec_name<<endl<<"no of wheels="<<no_of_wheels<<endl<<"car id ="<<car_id<<endl<<endl;
    }
};
class Bike:public Vehicle
{
    int bike_id;
public:
    Bike (string name, int wheels,int id):Vehicle(name,wheels)
    {
        bike_id=id;
    }
    void display()
    {
        cout<<"From Bike:"<<endl;
        cout<<"name ="<<vec_name<<endl<<"no of wheels="<<no_of_wheels<<endl<<"bike id ="<<bike_id<<endl<<endl;
    }
};
int main()
{
    Vehicle *v[3];
    Bus *bus =new Bus("Tata",6,123);
    Car *car = new Car("Tesla",4,342);
    Bike *bike = new Bike("ninja",2,898);
    cout<<"Before type casting:"<<endl;
    bus->display();
    car->display();
    bike->display();
    v[0]=dynamic_cast<Vehicle *>(bus);
    v[1]=dynamic_cast<Vehicle *>(car);
    v[2]=dynamic_cast<Vehicle *>(bike);
    cout<<"After type casting:"<<endl;
    for(int i=0;i<3;i++)
    {
        v[i]->display();
        cout<<endl;
    }
    cout<<"Type ID:"<<endl;
    cout<<typeid(*bus).name()<<endl;
    cout<<typeid(*car).name()<<endl;
    cout<<typeid(*bike).name()<<endl;
}


