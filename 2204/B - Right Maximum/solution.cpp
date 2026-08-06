#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=0,c=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>=m){
                c++;
                m=x;}
            }
        cout<<c<<"
";
    }
}