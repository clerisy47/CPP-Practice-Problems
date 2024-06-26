// Namespace example

#include <iostream>
using namespace std;

namespace Square
{
    int num;
    int fun(int num)
    {
        return num * num;
    }
}

namespace Cube
{
    int num;
    int fun(int num)
    {
        return num * num * num;
    }
}

int main()
{
    cin >> Square::num;
    cin >> Cube::num;
    cout << Square::fun(Cube::num) << endl;
    cout << Cube::fun(Square::num);
    return 0;
}