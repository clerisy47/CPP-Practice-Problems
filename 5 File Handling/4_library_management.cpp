#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Book
{
private:
    int id, num_books;
    char book_name[50], purchase_date[20];

public:
    void input()
    {
        cin >> id;
        cin.ignore();
        cin.getline(book_name, 50);
        cin >> num_books;
        cin.ignore();
        cin.getline(purchase_date, 20);
    }

    void display()
    {
        cout << setw(5) << left << id
             << setw(30) << book_name
             << setw(15) << num_books
             << setw(15) << right << purchase_date << endl;
    }

    void store(fstream &file)
    {
        file.write(reinterpret_cast<char *>(this), sizeof(Book));
    }

    void retrieve(fstream &file)
    {
        file.read(reinterpret_cast<char *>(this), sizeof(Book));
    }
};

int main()
{
    Book books[3];
    fstream file;

    file.open("books.dat", ios::app | ios::binary);
    if (!file)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter information of Book " << i + 1 << endl;
        books[i].input();
        books[i].store(file);
    }
    file.close();

    file.open("books.dat", ios::in | ios::binary);
    if (!file)
    {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << setw(5) << left << "ID"
         << setw(30) << left << "Book Name"
         << setw(15) << left << "Num Books"
         << setw(15) << right << "Purchase Date" << endl;
    for (int i = 0; i < 3; i++)
    {
        books[i].retrieve(file);
        books[i].display();
    }
    file.close();

    return 0;
}