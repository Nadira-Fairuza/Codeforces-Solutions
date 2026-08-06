#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    while(k--){
        int n,cnt=0;
        cin>>n;
        bool flag=false;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>2)flag=true;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]==2){
                cnt++;
            }
        }
        if(cnt>1)flag=true;
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}