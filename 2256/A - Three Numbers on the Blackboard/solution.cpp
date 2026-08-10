#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t ;
    while(t--){
        int n=3;
        
        vector<int>a(n);
        for(int i=0;i<n;i++){
          cin >> a[i];  
        }
        sort(a.begin(),a.end());
        int last=a[2];
        a[2]=a[0]+a[1];
        cout <<min(last,a[2])-a[0]<<endl;
    }
}