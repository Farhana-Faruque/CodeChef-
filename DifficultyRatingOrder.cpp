#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    
    for(int i = 0; i < test; i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int count = 0;
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                cout << "No" << endl;
                break;
            }
            else{
                count++;
            }
        }

        if(count == n-1){
            cout << "Yes" << endl;
        }
        
    }

    return 0;
}