#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
    int n,mx=0;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]==n)mx=i;
    }
    int temp=p[0];
    p[0]=p[mx];
    p[mx]=temp;
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}