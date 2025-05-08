#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int size;
        cin >> size;
        int arr[size];
        for(int j = 0; j < size; j++){
            cin >> arr[j];
        }
        int count1 = 0, count2 = 0, count3 = 0;
        if(size % 2 == 0){
            for(int j = 0; j < size; j++){
                if(arr[j] == 1){
                    count1++;
                }
                else if(arr[j] == 2){
                    count2++;
                }
                else if(arr[j] == 0){
                    count3++;
                }
            }
            if((count1 > size/2) || (count2 > size/2)){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
            
        }
        else{
            cout << "No" << endl;
        }

    }
    
    return 0;
}