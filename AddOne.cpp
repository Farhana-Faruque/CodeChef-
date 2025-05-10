#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        string str;
        cin >> str;

        int size = str.size();

        if(size >= 5){
            char last = str[size - 1];
            int num = (int)last;
            
            num = num + 1;
            char newChar = (char)num;
            str[size - 1] = newChar;
        }
        else{
            int n = stoi(str);
            n = n + 1;
            str = to_string(n);
        }
        
        cout << str << endl;

    }
    
    return 0;
}