#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,x;
        cin>>a>>b>>n;
 
        long long c=b;
 
        for(int i=0;i<n;i++){
            cin>>x;
            c += min(x, a-1);
        }
 
        cout<<c<<endl;
    }
}