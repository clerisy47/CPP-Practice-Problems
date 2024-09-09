/* 3d coordinate addition and subtraction*/

#include <iostream>
#include <math.h>
using namespace std;

class Coordinate
{
private:
    float x, y, z, r;

public:
    Coordinate(float x, float y, float z) : x(x), y(y), z(z), r(sqrt(x * x + y * y + z * z))
    {
    }

    // member function (first argument is the class it is defined in itself)
    Coordinate operator+(Coordinate &c1)
    {
        return Coordinate(x + c1.x, y + c1.y, z + c1.z);
    }

    // non member function (friend functions are always non member)
    friend Coordinate operator-(Coordinate &c1, Coordinate &c2)
    {
        return Coordinate(c1.x - c2.x, c1.y - c2.y, c1.z - c2.z);
    }

    friend bool operator>(Coordinate &c1, Coordinate &c2)
    {
        return c1.r > c2.r;
    }
    friend bool operator==(Coordinate &c1, Coordinate &c2)
    {
        return c1.r == c2.r;
    }
    friend bool operator<(Coordinate &c1, Coordinate &c2)
    {
        return c1.r < c2.r;
    }
    void display()
    {
        cout << x << ", " << y << ", " << z << endl;
    }
};

int main()
{
    Coordinate c1(5, 10, 15), c2(2, 4, 6);
    Coordinate sum = c1 + c2, diff = c1 - c2;
    sum.display();
    diff.display();
    cout << (c1 > c2) << endl;
    cout << (c1 == c2) << endl;
    cout << (c1 < c2) << endl;

    return 0;
}