#include <iostream>
using namespace std;

class Fahrenheit
{
private:
    float f;

public:
    Fahrenheit(float f)
    {
        this->f = f;
    }
    float getF()
    {
        return f;
    }
};

class Celsius
{
private:
    float c;

public:
    Celsius(float c)
    {
        this->c = c;
    }
    float getC()
    {
        return c;
    }
    operator Fahrenheit()
    {
        return Fahrenheit(c * 1.8 + 32);
    }
};

int main()
{
    float n;
    cin >> n;
    Celsius c(n);
    Fahrenheit f = c;
    cout << "Celsius: " << c.getC() << ", Fahrenheit: " << f.getF() << endl;
    return 0;
}