#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char> s(n);
        for(int i=0; i<n; i++) cin >> s[i];
            int ans = -1;
        for(int i=0; i<n-1; i++){
            if(s[i] == 'R' && s[i+1] == 'L'){
                ans = i+2;
                break;
            }
        }
    cout << ans << endl;
 
    }
return 0;
}
 