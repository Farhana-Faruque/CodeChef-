#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int max = arr[0];
        for(int j = 1; j < n; j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }
        cout << max << endl;
    }
    
    return 0;
}