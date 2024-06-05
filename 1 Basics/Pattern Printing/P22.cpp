#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<=2*(n-1); i++){
        // converting matrix so that outer loop will be 0 then 1 then 2 and so on
        for(int j=0; j<=2*(n-1); j++){    
            int top = i;
            int bottom = (2*n-1)-i-1; // subtracted 1 again because of 0 indexing
            int left = j;
            int right = (2*n-1)-j-1;
            cout << n- min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}