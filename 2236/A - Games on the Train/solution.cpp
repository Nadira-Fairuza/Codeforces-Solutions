#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        cin>>a[0];
        int mx=a[0];
        int mn=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        int ans=mx-mn+1;
        cout<<ans<<endl;
    }
    return 0;
}