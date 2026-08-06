#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,cnt=1,mx=1;
    cin>>n;
    vector<int>a(n);
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>a[i-1]){
                cnt++;
                 mx= max(mx,cnt);
        }
        else{
            mx= max(mx,cnt);
 
            cnt=1;
        }
    }
    cout<<mx;
    return 0;
}