#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,t;
    cin>>t;
    while(t--){
    cin>>n;
    int zero=0,maxzero=0;
    while(n--){cin>>a;
       if(a==0)zero++;
       maxzero=max(zero,maxzero);
       if(a==1)zero=0;
    }
    cout<<maxzero<<endl;
    }
    return 0;
}