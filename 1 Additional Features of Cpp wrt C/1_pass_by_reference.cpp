// structure to hold date

#include <iostream>
using namespace std;

struct Date
{
public:
    int year;
    int month;
    int day;
};

void set(Date &date)
{
    cin >> date.year;
    cin >> date.month;
    cin >> date.day;
}

void get(Date &date)
{
    cout << date.year << "/" << date.month << "/" << date.day;
}

int main()
{
    Date date;
    set(date);
    get(date);
    return 0;
}