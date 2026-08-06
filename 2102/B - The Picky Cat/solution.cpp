#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int  t;
    cin>>t;
    while(t--){
    int n,median,big=1,smol=0;
    cin>>n;
    cin>>median;
 
        for (int i = 1; i < n; i++) {
            int x;
            cin>>x;
            if(abs(x)>abs(median))big++;
            else smol++;
        }
        if(big>=smol)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
    return 0;
}