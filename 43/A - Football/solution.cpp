#include <bits/stdc++.h>
using namespace std;
 
int main() {
        int n;
        cin>>n;
        string a,b,s;
        cin>>a;
        int cnt1=1,cnt2=0;
        for(int i=1;i<n;i++){
            cin>>s;
            if(a==s)cnt1++;
            else {b=s ;
                cnt2++;
            }
        }
        if(cnt1>cnt2)cout<<a;
        else cout<<b;
}