#include <iostream>
using namespace std;

class Coordinate
{
private:
    float x, y, z;

public:
    Coordinate(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    friend Coordinate operator+(Coordinate &c1, Coordinate &c2)
    {
        return Coordinate(c1.x + c2.x, c1.y + c2.y, c1.z + c2.z);
    }
    friend Coordinate operator-(Coordinate &c1, Coordinate &c2)
    {
        return Coordinate(c1.x - c2.x, c1.y - c2.y, c1.z - c2.z);
    }
    void display()
    {
        cout << x << ", " << y << ", " << z << endl;
    }
};

int main()
{
    Coordinate c1(5, 10, 15), c2(2, 4, 6);
    Coordinate res = c1 + c2;
    res.display();
    return 0;
}