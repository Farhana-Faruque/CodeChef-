#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int size; 
        cin >> size;
        char con[size];
        for(int j = 0; j < size ; j++){
            cin >> con[j];
        }
        int count = 0;  
        for(int j = 0; j<size-1; j++){
            if(con[j] == con[j+1]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}