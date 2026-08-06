#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                a[i+1]=a[i];
                sum+=a[i];
            }
            else{
                sum+=a[i];
 
            }
        }sum+=a[n-1];
            cout<<sum<<endl;
    }
    return 0;
}