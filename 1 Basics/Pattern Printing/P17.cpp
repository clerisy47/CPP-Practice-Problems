#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<=n-1; i++){
        for( char j = 0; j<= n-1-i-1; j++){
            cout << " ";
        }
        for( char j = 'A'; j<= 'A'+i; j++){
            cout << j;
        }
        for( char j = 'A' + i -1; j>= 'A'; j--){
            cout << j;
        }

        cout << endl;
    }
    return 0;
}