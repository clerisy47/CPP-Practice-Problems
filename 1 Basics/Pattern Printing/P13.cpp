#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, counter=1;
    cin >> n;
    for(int i=0; i<= n-1; i++){
        for(int j=0; j<= i; j++){
            cout << counter;
            counter ++;
        }
        cout << endl;
    }
}