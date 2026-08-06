#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,mx=0,x,y;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
 
        }
        sort(a.begin(),a.end());
        cout<<a[n-1] <<endl;
    }
    return 0;
}