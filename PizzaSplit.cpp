#include<bits/stdc++.h>
using namespace std;

int main(void){
    int num;
    cin >> num;
    int count = 1;
    if(num % 2 == 0){
        cout << count;
    }
    else{
        count++;
        cout << count;
    }
    cout << endl;
    
    return 0;
}