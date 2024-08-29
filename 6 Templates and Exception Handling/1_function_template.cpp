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

// overloading template function with template function of 2 paramters
template <class T1, class T2>
T1 myMax(T1 a, T2 b)
{
    if (a > b)
    {
        return a;
    }
    return b;
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
    int a = 1, b = 2;
    float c = 3;
    char *d = "abc";
    char *e = "def";
    cout << myMax(a, b) << endl;
    cout << myMax(a, c) << endl;
    cout << myMax(d, e) << endl;
}