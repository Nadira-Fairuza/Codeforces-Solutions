#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int a,sum=0,ut=0;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        if(sum==-1){
            sum=0;
            ut++;
        }
    }
    cout<<ut<<endl;
}