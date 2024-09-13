#include <iostream>
using namespace std;

const int MAX = 2;

template <class T>
class Stack
{
private:
    T arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    class Full
    {
    };
    class Empty
    {
    };
    void push(T x)
    {
        if (top == MAX - 1)
        {
            throw Full();
        }
        else
        {
            arr[++top] = x;
        }
    }
    T pop()
    {
        if (top == -1)
        {
            throw Empty();
        }
        else
        {
            return arr[top--];
        }
    }
};

int main()
{
    Stack<int> s;
    try
    {
        s.push(5);
        s.push(1);
        // s.push(5); // Error: stack is full
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl; // Error: stack is empty
    }
    catch (Stack<int>::Full f)
    {
        cout << "Error: Stack is full";
    }
    catch (Stack<int>::Empty e)
    {
        cout << "Error: Stack is empty";
    }
}