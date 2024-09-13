#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T myMax(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

// overloading template function with template function of 3 paramters
template <class T>
T myMax(T a, T b, T c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > c)
    {
        return b;
    }
    return c;
}

// overloading template function with function
char *myMax(char *a, char *b)
{
    if (strcmp(a, b) > 0)
    {
        return a;
    }
    return b;
}

int main()
{
    int a = 1, b = 2, c = 5;
    float d = 3.4;
    char *e = "abc";
    char *f = "def";
    cout << myMax(a, b) << endl;
    cout << myMax(a, b, c) << endl;
    cout << myMax(e, f) << endl;
}