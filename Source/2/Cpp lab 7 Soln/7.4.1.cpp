/*Create	a	polymorphic	class Vehicle and	create	other	derived classes 
Bus, Car and Bike from Vehicle.  With  this  program  illustrate	
RTTI	by  the  use of dynamic_cast and typeid operators.*/
#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;
class vehicle
{
 private:
 protected:
  string registration;
  int noofwheels;
 public:
  vehicle(string r, int n)
  {
    registration = r;
    noofwheels = n;
  }
  string getregistration()
  {
    cout << "Vehicle getRegistratin called" << endl;
    return registration;
  }
};
class bus : public vehicle
{
 private:
 public:
  bus(string r):vehicle(r,4){};
  string getregistration()
  {
    cout << "Bus getRegistratin called" << endl;
    return registration;
  }
};
class car : public vehicle
{
 private:
 public:
  car(string r):vehicle(r,4){};
  string getregistration()
  {
    cout << "Car getRegistratin called" << endl;
    return registration;
  }
};
class bike : public vehicle
{
 private:
 public:
  bike(string r):vehicle(r,2){};
  string getregistration()
  {
    cout << "Bike getRegistratin called" << endl;
    return registration;
  }
};

int main()
{
  vehicle *vlist[3];
  bus *bs = new bus("1");
  car *c = new car("1");
  bike *b = new bike("1");
  vlist[0] = dynamic_cast<vehicle *>(bs);
  vlist[1] = dynamic_cast<vehicle *>(c);
  vlist[2] = dynamic_cast<vehicle *>(b);
  for(int i = 0; i < 3 ; i++)
  {
    cout << typeid(*vlist[i]).name() << endl;
    cout << vlist[i]->getregistration() << endl;
  }
  cout << typeid(*bs).name() << endl;
  cout << typeid(*c).name() << endl;
  cout << typeid(*b).name() << endl;
  return 0;
}

