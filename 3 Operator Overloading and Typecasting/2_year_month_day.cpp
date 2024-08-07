#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;

public:
    Date(int year, int month = 1, int day = 1) : year(year), month(month), day(day) {}
    void display()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
    // adds two dates
    friend Date operator+(Date d1, Date d2)
    {
        Date d3(d1.year + d2.year, d1.month + d2.month, d1.day + d2.day);
        if (d3.day > 30) // if condition is most cause without it we will encounter 0 based indexing error
        {
            d3.month += d3.day / 30;
            d3.day = d3.day % 30;
        }
        if (d3.day > 12)
        {
            d3.year += d3.month / 12;
            d3.month = d3.month % 12;
        }

        return d3;
    }
    // finds number of days between two dates
    friend int operator-(Date D1, Date D2)
    {
        int days1 = D1.year * 365 + D1.month * 12 + D1.day;
        int days2 = D2.year * 365 + D2.month * 12 + D2.day;
        return days1 - days2;
    }
};

int main()
{
    Date d1(2059, 03, 02), d2(2081, 4, 28);
    Date d3 = d1 + d2;
    d3.display();
    cout << d2 - d1 << endl;
    return 0;
}