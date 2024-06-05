// Write a C++ program to join two strings using dynamics constructor concept

#include <iostream>
#include <string.h>
using namespace std;

class Strings {
    char *str;
    public:
        Strings() {}
        Strings(char *s) {
            int length = strlen(s);
            str = new char[length];
            strcpy(str,s);
        }
        Strings join(Strings s) {
            Strings temp;
            int length = strlen(str) + strlen(s.str);
            temp.str = new char[length];
            strcpy(temp.str,str);
            strcat(temp.str,s.str);
            return temp;
        }
        void display() {
            cout << str;
        }
};

int main() {
    Strings s1("Amit"),s2("Chaudhary"),s3;
    s3 = s1.join(s2);
    s3.display();
    return 0;
}
