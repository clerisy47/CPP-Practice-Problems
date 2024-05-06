#include <iostream>
using namespace std;

int main() {
    int count = 0;
    cout << "Enter the number: ";
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) {
        if(n%i==0)
            count++;
    }
    if(count==2 || count == 1)
        cout << n << " is prime.";
    else
        cout << n << " is not prime.";
    return 0;
}
