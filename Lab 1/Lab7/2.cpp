// WAP to concatenate two strings using the concept of operator overloading (+).

#include <iostream>
#include <string.h>
using namespace std;

class String {
    char *str;
    public:
        String(char *s) {
            int length = strlen(s);
            str = new char[length];
            strcpy(str, s);

        }
        String() {}

        String operator+(String s) {
            String temp;
            int l = strlen(str) + strlen(s.str);
            temp.str = new char[l];
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }
        void display() {
            cout << str << endl;
        }

};

int main() {
    String s1("Amit"), s2("Chaudhary"), s3;
    s1.display();
    s2.display();
    cout << "After concatenation: ";
    s3 = s1 + s2;
    s3.display();
    return 0;
}
