#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,x1,x2,k,ans = 0; 
        cin>>n>>x1>>x2>>k; 
        if(n <=3) { 
            cout<<1<<endl; 
            continue;
        }
        else{
        ans = k + min(abs(x2-x1),n - max(x1,x2) + min(x1,x2)); 
        cout<<ans<<endl;
        }
    }
 
    return 0;
}