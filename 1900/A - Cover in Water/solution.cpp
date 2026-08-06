#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, count = 0;
        cin >> n;
 
        string s;
        cin >> s;
 
        for(int i = 0; i < n; i++){
            if(i > 0 && i < n-1 && s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                count=2;
                break;
            }
            else if(s[i]=='.'){
                count++;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}