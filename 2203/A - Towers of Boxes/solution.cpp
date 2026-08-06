#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int i,n,m,d,tower=1,box;
    cin>>n>>m>>d;
    box=d/m+1;
    for(int i=box;i<n;i=i+box){
        tower++;
    }
      cout<<tower<<endl;
    }
}