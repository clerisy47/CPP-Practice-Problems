// Define a class publication which has a title. Derive two classes from it.
// A class book which has an accession number and a class magazine which has volume number.
// With these two as bases, derive the class journal. Define a function print() in each of these classes.
// Ensure that the derived class function always invokes the base class function.
// In main, create  a journal called IEEOOP with an accession number 681.3 and a volume number 1.
// Invoke the print() function for this object.


#include <iostream>
#include <string.h>
using namespace std;

class Publication {
    protected:
        char title[30];
    public:
        void print() {
            cout << "Title:" << title << endl;
        }
};

class Book: virtual public Publication {
    protected:
        int accession_number;
    public:
        void print() {
            cout << "Accession Number: " << accession_number << endl;
        }
};

class Magazine:virtual public Publication {
    protected:
        int volume_number;
    public:
        void print() {
            cout << "Volume number: " << volume_number << endl;
        }
};

class journal:public Book, public Magazine {
    public:
        journal(char *ch, int an, int vn) {
            strcpy(title, ch);
            accession_number = an;
            volume_number = vn;
        }

        void print() {
            Publication::print();
            Book::print();
            Magazine::print();
        }
};

int main() {
    journal j("IEEOOP",6813,1);
    j.print();
    return 0;
}
