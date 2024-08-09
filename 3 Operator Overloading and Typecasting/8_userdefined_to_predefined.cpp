// typecasting user defined type to predefined types and vice versa

#include <iostream>
#include <cmath>
using namespace std;

class Round
{
private:
    float f;

public:
    Round(float f) : f(f) {}
    // unlike operator overloading it doesn't need friend return type infront of operator
    operator int()
    {
        return (int)round(f);
    }
};

int main()
{
    float f;
    cin >> f;
    Round r = 5;            // equivalent to Round r(5) ie typecasting from float to Round, which is done automatically,
    cout << (int)r << endl; // typecasting from Round to int which need to be done throught operator overloading as see in Round class
}