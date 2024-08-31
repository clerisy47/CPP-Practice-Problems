#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *str;
    int size;

public:
    // dynamic constructor
    MyString(char *str = "")
    {
        size = strlen(str);
        str = new char[size + 1];
        strcpy(str, str);
    }
    ~MyString()
    {
        delete[] str;
    }
    char *getS()
    {
        return str;
    }
    int getSize()
    {
        return size;
    }
    friend MyString operator+(MyString &ms1, MyString &ms2)
    {
        char *temp = new char[ms1.size + ms2.size + 1];
        strcpy(temp, strcat(ms1.str, ms2.str));
        MyString result(temp);
        return result;
    }
};

int main()
{
    MyString a("Object "), b("Oriented");
    MyString c = a + b;
    cout << c.getS() << endl;
    return 0;
}