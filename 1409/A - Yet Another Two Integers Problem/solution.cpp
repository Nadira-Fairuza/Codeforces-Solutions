#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>a>>b;
    int ans=abs(a-b)/10;
    if(abs(a-b)%10>0)ans++;
    cout<<ans<<endl;
    }
    return 0;
}