#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i< test; i++){
        int size;
        cin >> size;
        char str[size];
        char dna[size/2]; 
        for(int j = 0; j<size; j++){
            cin >> str[j];
        }
        for(int j = 0; j<size; j = j+2){
            if(str[j] == '0' && str[j+1] == '0'){
                dna[j/2] = 'A';
            }
            else if(str[j] == '0' && str[j+1] == '1'){
                dna[j/2] = 'T';
            }
            else if(str[j] == '1' && str[j+1] == '0'){
                dna[j/2] = 'C';
            }
            else if(str[j] == '1' && str[j+1] == '1'){
                dna[j/2] = 'G';
            }

        }
        for(int j = 0; j<size/2; j++){
            cout << dna[j];
        }
        cout << endl;
    }
    return 0;
}