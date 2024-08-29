#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class MyException
{
private:
    int n;
    char descript[200];

public:
    MyException()
    {
        n = 0;
        descript[0] = '\0';
    }
    MyException(int n, char *descript)
    {
        this->n = n;
        strcpy(this->descript, descript);
    }

    int getN()
    {
        return n;
    }

    char *getDescript()
    {
        return descript;
    }
};

double mySqrt(double n)
{
    if (n < 0)
    {
        throw MyException(1, "Error: negative number");
    }
    else
    {
        return sqrt(n);
    }
}

int main()
{
    double n = 5;
    cin >> n;
    try
    {
        double sqrt = mySqrt(n);
        cout << sqrt << endl;
    }
    catch (MyException e)
    {
        cout << "Error occured in performing square root" << endl;
        cout << "Error number: " << e.getN() << endl;
        cout << "Error descriptiton: " << e.getDescript() << endl;
    }
    return 0;
}