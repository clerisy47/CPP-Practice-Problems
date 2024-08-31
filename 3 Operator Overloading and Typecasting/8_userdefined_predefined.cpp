// typecasting user defined type to predefined types and vice versa

#include <iostream>
#include <cmath>
using namespace std;

class MyRound
{
private:
    float f;

public:
    MyRound(float f) : f(f) {}
    // unlike operator overloading it doesn't need friend return type infront of operator
    operator int()
    {
        return static_cast<int>(round(f));
    }
};

int main()
{
    float f;
    cin >> f;
    MyRound r = f;                       // Predefined to userdefined. Equivalent to MyRound r(5). Done implicitly.
    cout << static_cast<int>(r) << endl; // Userdefined to predifined. Need to overload operator int()
}