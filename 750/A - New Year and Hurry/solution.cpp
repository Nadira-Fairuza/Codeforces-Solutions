#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,t,m=0,prob=0;
    cin>>n>>k;
    t=240-k;
    for(int i=1;i<=n;i++){
        m+=i*5;
        if(m<=t){
            prob++;
        }
        else
            break;
    }
    cout<<prob;
}