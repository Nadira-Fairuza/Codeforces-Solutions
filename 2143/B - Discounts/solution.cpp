#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long sum=0;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(k);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(int i=1;i<k;i++){
            b[i]+=b[i-1];//prefix sum
        }
        for(int i=0;i<k;i++){
            if(b[i]>n){
                break;
            }
            else sum-=a[b[i]-1];
 
        }
        cout<<sum<<endl;
    }
    return 0;
}