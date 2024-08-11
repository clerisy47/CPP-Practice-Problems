#include <iostream>
using namespace std;

class Polygon // abstract class since it contains at least one pure virtual function
{
protected:
    float length;
    float height;

public:
    Polygon(float length, float height) : length(length), height(height) {}
    virtual float area() = 0; // pure virtual function ie empty virtual function
};

class Triangle : public Polygon
{
public:
    Triangle(float length, float height) : Polygon(length, height) {} // initializing constructor of base class through derived class
    float area() override
    {
        return 1.0 / 2 * length * height;
    }
};

class Rectangle : public Polygon
{
public:
    Rectangle(float length, float height) : Polygon(length, height) {}
    float area() override
    {
        return length * height;
    }
};

int main()
{
    Triangle t(6, 5);
    Rectangle r(6, 5);
    cout << t.area() << " " << r.area() << endl;
    return 0;
}