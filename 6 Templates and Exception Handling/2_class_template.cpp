#include <iostream>
using namespace std;

template <class T> // default arguments with class templates (optional)
class MyArray
{
private:
    T arr[1000];
    int n;

public:
    MyArray(T arr[], int n)
    {
        this->n = n;
        for (int i = 0; i <= n - 1; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    T findMax()
    {
        T maxE = arr[0];
        for (int i = 0; i <= n - 1; i++)
        {
            if (arr[i] > maxE)
            {
                maxE = arr[i];
            }
        }
        return maxE;
    }

    void sort()
    {
        for (int i = 0; i <= n - 2; i++)
        {
            for (int j = i; j <= n - 2 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void display()
    {
        for (int i = 0; i <= n - 1; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    int a[5] = {1, 5, 4, 2, 3};
    MyArray<int> b(a, 5);
    cout << b.findMax() << endl;
    b.sort();
    b.display();
    return 0;
}