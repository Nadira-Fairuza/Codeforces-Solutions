#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int  t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    bool posib=true;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    if(n==2){
        posib=true;
        
    }
    else{
        for(int i = 0; i < n-2; i++) {
        if(a[i]%a[i+1]!=a[i+2]){
            posib=false;
            
            break;
        }}
    }
 
    if(posib==false)cout<<-1<<endl;
    else cout<<a[0]<<" "<<a[1]<<endl;
    }
    return 0;
}