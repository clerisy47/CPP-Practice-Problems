// WAP with function that uses pass by reference to change meter to centimeter. Use pass by reference along with the namespace.


#include <iostream>
using namespace std;

namespace length {
    int m, cm;
}

void convert(int &x, int &y) {
    y = 100 * x;
}

int main() {
    using namespace length;
    cout << "Enter the length in meter:\n";
    cin >> m;
    convert(m, cm);
    cout << "The length in centimeter is: " << cm;
    return 0;
}
