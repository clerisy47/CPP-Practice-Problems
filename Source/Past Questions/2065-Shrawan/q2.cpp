// Write a program to check whether the number is prime or not using object class concept.
// Remember to return enumerated true or false the function where you check the number.
#include <iostream>
using namespace std;

enum bol{False,True};
class prime {
    int n;
    public:
        void input() {
            cout << "Enter the number:";
            cin >> n;
        }
        bol check() {
            bol flag = True;
            if(n==2)
                return True;
            for(int i=2;i<=n/2;i++) {
                if(n%i==0) {
                    flag = False;
                    break;
                }
            }
            return flag;
        }
        void display(){
            int flag = check();
            if(flag==1)
                cout << "It is prime";
            else
                cout << "It is not prime.";
        }
};

int main() {
    prime p;
    p.input();
    p.display();
    return 0;
}
