// Program that inputs two integers and sets the smallest integer to the average between them

#include <iostream>
using namespace std;

int &larger(int &a, int &b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    larger(a, b) = (a + b) / 2;
    cout << "After changing value of larger " << a << " " << b << endl;
}