#include <iostream>
using namespace std;

class DynamicArr
{
private:
    int *arr;
    int n;

public:
    DynamicArr(int n) : n(n)
    {
        arr = new int[n];
    }
    ~DynamicArr()
    {
        delete[] arr;
    }
    // must use member function
    int &operator[](int i) // return by reference is used as we need to assign value to each indexes of array
    {
        return arr[i];
    }
};

int main()
{
    int n;
    cin >> n;
    DynamicArr d(n);
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        d[i] = x;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << d[i] << " ";
    }
}