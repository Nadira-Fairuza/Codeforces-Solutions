#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,j=m-1;
        bool ok=true;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
 
 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if (n < 2 * m) {
            ok=false;
        }
 
 
        for (int i = 0; i < m; i++) {
            if (!(a[i] < b[i] && b[i] < a[n - m + i])) {
                ok = false;
                break;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}