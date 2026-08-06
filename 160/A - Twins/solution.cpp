#include <bits/stdc++.h>
using namespace std;
 
int main() {
        int n,cnt=0,sum=0,mn=0;
        cin >> n ;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt+=a[i];
        }
        sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--){
            sum+=a[i];
            mn++;
            if(sum>cnt - sum)break;
        }
    cout<<mn<<endl;
    return 0;
}