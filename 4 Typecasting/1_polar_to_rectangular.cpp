#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.1415;

class Polar
{
private:
    float r, theta;

public:
    Polar(int r = 0, int theta = 0)
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
};

class Rectangular
{
private:
    float x, y;

public:
    Rectangular(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Rectangular(Polar polar)
    {
        float r = polar.getR();
        float theta = polar.getTheta() * PI / 180;
        this->x = r * cos(theta);
        this->y = r * sin(theta);
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
};

int main()
{
    float r, theta;
    cin >> r >> theta;
    Polar polar(r, theta);
    Rectangular rectangular = polar;
    cout << round(rectangular.getX() * 1000) / 1000 << " " << round(rectangular.getY() * 1000) / 1000 << endl;
}
