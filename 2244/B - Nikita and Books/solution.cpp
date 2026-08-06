#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        bool ok=true;
        int n;
        cin>>n;
        vector<int>a(n);
        vector<long long>prefix(n);
        vector<long long>need(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        prefix[0]=a[0];
        need[0]=1;
        if(a[0]<1)ok=false;
        for(int i=1;i<n;i++){
            need[i]=need[i-1]+i+1;
        }
        for(int i=1;i<n;i++){
            prefix[i]=(prefix[i-1]+a[i]);
 
            if(prefix[i]<need[i])ok=false;
 
        }
        if(ok==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}