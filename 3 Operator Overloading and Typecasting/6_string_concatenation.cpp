#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *str;

public:
    // dynamic constructor
    MyString()
    {
        str = new char[1];
        str[0] = '\0';
    }

    ~MyString()
    {
        delete[] str;
    }

    void input()
    {
        cin >> str;
    }

    void display()
    {
        cout << str << endl;
    }

    friend MyString operator+(MyString &s1, MyString &s2)
    {
        MyString result;
        int len1 = strlen(s1.str);
        int len2 = strlen(s2.str);
        result.str = new char[len1 + len2 + 1]; // +1 for the null terminator

        for (int i = 0; i < len1; ++i)
        {
            result.str[i] = s1.str[i];
        }
        for (int i = 0; i < len2; ++i)
        {
            result.str[len1 + i] = s2.str[i];
        }
        result.str[len1 + len2] = '\0';

        return result;
    }
};

int main()
{
    MyString a, b;
    a.input();
    b.input();
    MyString c = a + b;
    c.display();
    return 0;
}