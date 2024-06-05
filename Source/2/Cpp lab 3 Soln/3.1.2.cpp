/*Write a simple program that convert the temperature in degree Celsius 
to degree Fahrenheit and vice versa using the basic concept of class and
 object. Make separate class for Centigrade and Fahrenheit which will 
 have the private member to hold the temperature value and make conversion 
 functions in each class for conversion from one to other. For example you 
 will have function toFahrenheit() in class Celsius that converts to Fahrenheit
scale and returns the value.*/
#include<iostream>//or
using namespace std;
class Centigrade
{
    private:
        int c;
    public:
        void celcius_data(void)
        {
            cout<<"Enter the value of celcius: ";
            cin>>c;
        }
        float toFarenheit()
        {
            return (1.8*c+32);
        }
};
class Fahrenheit
{
    private:
        int f;
    public:
        void fahrenheit_data(void)
        {
            cout<<endl<<"Enter the value of fahrenheit: ";
            cin>>f;
        }
        float toCelcius()
        {
            return ((f-32)/1.8);
        }
};
int main()
{
    Centigrade c;
    Fahrenheit f;
    c.celcius_data();
    cout<<"fahrenheit equivalent = "<<c.toFarenheit();
    f.fahrenheit_data();
    cout<<"celcius equivalent = "<<f.toCelcius();
    return 0;
}




