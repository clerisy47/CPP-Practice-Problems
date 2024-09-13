#include <iostream>
using namespace std;

const int MAX = 10000;

template <class T = int> // default arguments with class templates (optional)
class MyArray
{
private:
    T arr[MAX];
    int n;

public:
    MyArray() {}
    MyArray(T arr[], int n)
    {
        this->n = n;
        for (int i = 0; i <= n - 1; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    void input()
    {
        cin >> n;
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> arr[i];
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
            for (int j = 0; j <= n - 2 - i; j++)
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
            cout << arr[i] << " ";
        }
    }
};

template <class T1, class T2> // Multiple argument template
class MyPair
{
private:
    T1 first;
    T2 second;

public:
    MyPair(T1 first, T2 second) : first(first), second(second) {}
    void display()
    {
        cout << endl
             << first << " " << second << endl;
    }
};

int main()
{
    MyArray<> a; // Using default argument
    a.input();
    cout << a.findMax() << endl;
    a.sort();
    a.display();
    MyPair<char *, int> p("Ram", 3);
    p.display();
    return 0;
}