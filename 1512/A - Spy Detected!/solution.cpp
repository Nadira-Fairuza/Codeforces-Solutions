#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,same=0,ans;
        cin>>n;
        int a[n];
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]==a[1]){
            same=a[0];
            if(same!=a[2])cout<<3<<endl;
            }
        else{
            if(a[0]==a[2]){
                cout<<2<<endl;
 
                same=a[0];}
            else {
                cout<<1<<endl;
 
                same=a[1];
            }
        }
 
 
        for(int i=3;i<n;i++){
            cin>>a[i];
            if(a[i]!=same)cout<<i+1<<endl;
        }
    }
 
    return 0;
}