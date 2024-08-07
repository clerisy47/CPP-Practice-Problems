#include <iostream>
using namespace std;

class MyArr
{
private:
    int arr[5];

public:
    MyArr(int arr[5])
    {
        for (int i = 0; i <= 4; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    void display()
    {
        for (int i = 0; i <= 4; i++)
        {
            cout << arr[i] << " ";
        }
    }
    // must use member function
    int operator[](int i)
    {
        return arr[i];
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    MyArr a(arr);
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
}