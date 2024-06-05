#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << j+1;
        }
        for(int j=0; j<2*n-2-2*i; j++){
            cout << " ";
        }
        for(int j=i; j>-1; j--){
            cout << j+1;
        }
        cout << endl;
    }
    return 0;
}