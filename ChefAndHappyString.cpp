#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        string vowel;
        cin >> vowel;

        int count = 1;
        for(int j = 0; j < vowel.size(); j++){
            if((vowel[j] == 'a' || vowel[j] == 'e' || vowel[j] == 'i' || vowel[j] == 'o' || vowel[j] == 'u') && (vowel[j+1] == 'a' || vowel[j+1] == 'e' || vowel[j+1] == 'i' || vowel[j+1] == 'o' || vowel[j+1] == 'u')){
                count++;
            }
            else if (count >= 3){
                break;
            }
            else{
                count = 1;
            }
        }

        if(count > 2){
            cout << "Happy" << endl;
        }
        else{
            cout << "Sad" << endl;
        }

    }
    
    return 0;
}