// Converts celcius to fahrenheit using oop principles

#include <iostream>
using namespace std;

class Celcius
{
private:
    float c;

public:
    void inputData(int c)
    {
        this->c = c;
    }
    float convertToFahrenheit()
    {
        return 1.8 * c + 32;
    }
};

class Fahrenheit
{
private:
    float f;

public:
    void inputData(int f)
    {
        this->f = f;
    }
    float convertToCelcius()
    {
        return (f - 32) / 1.8;
    }
};

int main()
{
    int n1, n2;
    Celcius c;
    Fahrenheit f;
    cin >> n1 >> n2;
    c.inputData(n1);
    f.inputData(n2);
    cout << c.convertToFahrenheit() << endl;
    cout << f.convertToCelcius() << endl;
    return 0;
}