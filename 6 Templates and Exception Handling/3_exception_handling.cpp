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

double mySqrt(double n) throw(MyException) // exception specification. removed in c++ 17.
{
    if (n < 0)
    {
        throw MyException(47, "Error: negative number"); // exception with arguments
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
    catch (...)
    {
        cout << "Unknown error encountered in performing square root" << endl;
    }
    return 0;
}