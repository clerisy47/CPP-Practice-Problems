#include <iostream>
using namespace std;

// Forward declarations
class Fahrenheit;

class Celsius
{
private:
    float c;

public:
    Celsius(float c)
    {
        this->c = c;
    }
    Celsius(Fahrenheit &f);
    float getData()
    {
        return c;
    }
};

class Fahrenheit
{
private:
    float f;

public:
    Fahrenheit(float f)
    {
        this->f = f;
    }
    Fahrenheit(Celsius &c)
    {
        this->f = c.getData() * 1.8 + 32;
    }
    float getData()
    {
        return f;
    }
};

// This needs to be done after Fahrenheit class is fully defined
Celsius::Celsius(Fahrenheit &f)
{
    this->c = (f.getData() - 32) / 1.8;
}

int main()
{
    float n1, n2;
    cin >> n1 >> n2;
    Celsius c(n1);
    Fahrenheit f(n2);

    Fahrenheit fFromC = c;
    Celsius cFromF = f;

    cout << "Celsius: " << c.getData() << ", Fahrenheit: " << f.getData() << endl;
    cout << "Celsius from Fahrenheit: " << cFromF.getData() << ", Fahrenheit from Celsius: " << fFromC.getData() << endl;

    return 0;
}