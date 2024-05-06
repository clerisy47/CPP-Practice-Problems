// Write a program that uses a vector container to represent array and display
// the result in ascending order. For sorting you can use the vector member functions.


#include <iostream>
#include <vector>
using namespace std;

void sorter(vector<int>&v) {
    int temp;
    for(int i=0;i<v.size();i++) {
        for(int j=0;j<v.size()-i-1;j++) {
            if(v[j]>v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

void display(vector<int>&v) {
    for(int i=0;i<v.size();i++)
        cout << v[i] << "\t";
    cout << endl;
}

int main() {
    vector <int>v;
    int n;
    int elem;
    cout << "Enter the number of elements in the vector:";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i=0;i<n;i++) {
        cin >> elem;
        v.push_back(elem);
    }
    display(v);
    sorter(v);
    display(v);
    return 0;
}
