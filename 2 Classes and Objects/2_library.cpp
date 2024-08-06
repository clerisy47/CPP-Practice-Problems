#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string *books; // dynamically allocated array of strings
    int numBooks;

public:
    // Dynamic constructor
    Library(int numBooks)
    {
        this->numBooks = numBooks;
        books = new string[numBooks];
    }
    // Destructor
    ~Library()
    {
        delete[] books;
    }
    void setBook(int index, const string &book)
    {

        books[index] = book;
    }
    void display()
    {
        for (int i = 0; i < numBooks; i++)
        {
            cout << books[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int numBooks;
    cin >> numBooks;
    Library l1(numBooks); // Create object with dynamic constructor
    for (int i = 0; i < numBooks; i++)
    {
        string book;
        cin >> book;
        l1.setBook(i, book);
    }
    l1.display();
    return 0;
}
