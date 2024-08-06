#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string **books;
    int numRows, numBooks;

public:
    // Dynamic constructor
    Library(int numRows, int numBooks)
    {
        this->numRows = numRows;
        this->numBooks = numBooks;
        books = new string *[numRows];
        for (int i = 0; i < numRows; i++)
        {
            books[i] = new string[numBooks];
        }
    }

    // Destructor
    ~Library()
    {
        for (int i = 0; i < numRows; i++)
        {
            delete[] books[i];
        }
        delete[] books;
    }

    void setBook(int row, int col, const string &book)
    {
        books[row][col] = book;
    }

    void display()
    {
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < numBooks; j++)
            {
                cout << books[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int numRows, numBooks;
    cin >> numRows >> numBooks;
    Library l1(numRows, numBooks); // Create object with dynamic constructor

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numBooks; j++)
        {
            string book;
            cin >> book;
            l1.setBook(i, j, book);
        }
    }
    l1.display();
    return 0;
}
