#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n, i, ans;
        cin >> n;
        bool yes=false;
        vector<int> a(n);
        for (i = 0; i < n; ++i){
 
            cin >> a[i];
            if(a[i]==100){
                yes=true;
            }
        }
    if(yes)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}