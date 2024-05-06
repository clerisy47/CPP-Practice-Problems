/*Assume that one constructor initializes data member say num_vehicle, 
hour and rate. There should be 10% discount if num_vehicle exceeds 10. 
Display the total charge. Use two objects and show bit-by-bit copy of one 
object to another (make your own copy constructor).*/
#include<iostream>//or
using namespace std;
class Vehicle
{
    int num_vehicle;
    float hour, rate, charge;
public:
    Vehicle(int n, float h, float r): num_vehicle(n), hour(h), rate(r) {}
    Vehicle(Vehicle& v1)
    {
        hour = v1.hour;
        num_vehicle = v1.num_vehicle;
        rate = v1.rate;
    }
    float total_charge()
    {
        if(num_vehicle >= 10)
            return hour * rate * 0.9;
        else
            return hour * rate;
    }
    void display()
    {
        cout << "Number of Vehicles: " << num_vehicle << endl << "Hour: " << hour << endl << "Rate: Rs. " << rate << " per hour" << endl << "Total Charge = " << total_charge() << endl;
    }
};
int main()
{
    int n;
    float h, r;
    cout << "Enter number of vehicles: ";
    cin >> n;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter rate: ";
    cin >> r;
    Vehicle v1(n, h, r);
    Vehicle v2(v1);
    v1.display();
    v2.display();
}


