#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        long long n, x;
        cin >> n >> x;
 
        vector<long long> a(n);
        map<long long,long long> cnt;
 
        for(int i=0;i<n;i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
 
        sort(a.begin(),a.end());
 
        int ans = 0;
 
        for(long long v : a){
            if(cnt[v]==0) continue;
 
            cnt[v]--;
 
            if(cnt[v*x] > 0){
                cnt[v*x]--;
            }
            else{
                ans++;
            }
        }
 
        cout << ans << "
";
    }
}