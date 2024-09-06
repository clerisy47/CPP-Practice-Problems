#include <iostream>
using namespace std;

namespace square
{
    int num;
    int fun(int num)
    {
        return num * num;
    }
}

namespace cube
{
    int num;
    int fun(int num)
    {
        return num * num * num;
    }
}

int main()
{
    cin >> square::num;
    cin >> cube::num;
    cout << square::fun(square::num) << endl;
    cout << cube::fun(cube::num) << endl;
    return 0;
}