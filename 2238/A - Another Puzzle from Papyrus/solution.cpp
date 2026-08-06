#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
 
void solve(){
 
    int n, c; cin>>n>>c;
    vector<int> a(n), b(n); 
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
 
    bool move = 0;
    int cost = 0;
    for(int i = 0; i<n; i++) if(a[i] < b[i]) move = 1;
 
    if(move){ 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cost = c;
    }
 
    // I love undertale
 
    for(int i = 0; i<n; i++){
        if(a[i] < b[i]){
            cout<<-1<<'
';
            return;
        }
 
        cost = (cost + a[i] - b[i]);
    }
 
    cout<<cost<<'
';
 
 
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    LL T = 1; cin>>T;
    while (T--) solve();
    return 0;
}