#include <iostream>
#include <cmath>
using namespace std;

// Forward declaration
class Polar;

class Rectangular
{
private:
    float x, y;

public:
    Rectangular(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    operator Polar();
};

class Polar
{
private:
    float r, theta;

public:
    Polar(float r = 0, float theta = 0)
    {
        this->r = r;
        this->theta = theta;
    }
    float getR()
    {
        return r;
    }
    float getTheta()
    {
        return theta;
    }
    operator Rectangular()
    {
        float x = r * cos(theta);
        float y = r * sin(theta);
        return Rectangular(x, y);
    }
};

Rectangular::operator Polar()
{
    float r = sqrt(x * x + y * y);
    float theta = atan(y / x);
    return Polar(r, theta);
}

int main()
{
    float x, y;
    cin >> x >> y;
    Rectangular r(x, y);
    Polar p = r;
    Rectangular r1 = p;
    cout << p.getR() << " " << p.getTheta() << endl;
    cout << r1.getX() << " " << r1.getY() << endl;
}
