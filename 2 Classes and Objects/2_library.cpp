#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string *books; // dynamically allocated array of strings
    // vector<string> books; // safer and more convenient as it doesn't require to manually delete
    int numBooks;

public:
    // Constructor
    Library(string *books, int numBooks)
    {
        this->books = books;
        this->numBooks = numBooks;
    }
    // Destructor
    ~Library()
    {
        delete[] books;
    }
    void Display()
    {
        for (int i = 0; i <= numBooks - 1; i++)
        {
            cout << books[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    string *books = new string[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> books[i];
    }
    Library l1(books, n);
    l1.Display();
    return 0;
}