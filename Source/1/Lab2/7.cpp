// WAP using new and delete operators to store n numbers dynamically and find the average of the numbers by using casting operator.


#include <iostream>
using namespace std;

int main() {
    int n, *ptr, sum = 0;
    float avg;
    cout << "How manu numbers:";
    cin >> n;
    ptr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> ptr[i];
        sum += ptr[i];
    }
    avg = static_cast<float>(sum)/n;
    cout << "\nThe average is: " << avg;
    delete []ptr;
    return 0;
}
