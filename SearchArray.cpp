#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << "Yes" << endl;
            break;
        }
        else{
            count++;
        }

    }
    if(count == n){
        cout << "No" << endl;
    }
    
    return 0;
}