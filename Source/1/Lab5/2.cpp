// WAP that will allocate memory dynamically for the pointer member of the string class that point to character array.


#include <iostream>
#include <string.h>

using namespace std;

class strings {
    char *name;
    public:
        strings() {}
        strings (char *DN) {
            int l = strlen(DN);
            name = new char[l];
            strcpy(name,DN);
        }
        strings concat (strings st) {
            strings temp;
            int length = strlen(st.name)+ strlen(name);
            temp.name = new char[length];
            strcpy(temp.name,name);
            strcat(temp.name,st.name);
            return temp;
        }
        void display() {
            cout << "The concatenated string is: " << name;
        }

};

int main() {
    strings s1("Engineer"),s2("ing"),s;
    s = s1.concat(s2);
    s.display();
    return 0;
    return 0;
}
