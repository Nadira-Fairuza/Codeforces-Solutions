#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q,l,r,k;
        cin>>n>>q;
        vector<long long> pre(n+1);;
        vector<int>a(n);
        pre[0]=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pre[i+1] = pre[i] + a[i];
        }
        for(int i=0;i<q;i++){
            cin>>l>>r>>k;
            long long sum= 1LL*k*(r-l+1) -(pre[r]-pre[l-1]) +pre[n];
            if(sum%2==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
 
    return 0;
}