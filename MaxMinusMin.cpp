#include<bits/stdc++.h>
using namespace std;

int main(void){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        int a,b,c;
        cin >> a >> b >> c;

        int max1 = max(a, max(b, c));
        int min1 = min(a, min(b, c));
        int result = max1 - min1;
        cout << result << endl;
    }
    return 0;
}