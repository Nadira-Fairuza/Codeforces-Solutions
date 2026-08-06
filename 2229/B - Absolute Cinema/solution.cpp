#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        vector<long long>a(n);
        vector<long long>b(n);
        vector<long long>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            sum+=max(a[i],b[i]);
            m.push_back(min(a[i],b[i]));
        }
        sort(m.begin(),m.end());
        sum+=m[n-1];
        cout<<sum<<endl;
    }
 
    return 0;
}