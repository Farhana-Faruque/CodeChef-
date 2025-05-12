#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int count = 1;

    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            count = 0;
            cout << "NO" << endl;
            break;
        }
    }
    if(count == 1){
        cout << "YES" << endl;
    }

    return 0;
}