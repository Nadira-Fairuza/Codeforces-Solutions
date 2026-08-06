#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n;
    cin>>t;
    
    while(t--){
        bool nozero = false, has67 = false;
        cin>>n;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x!= 0) nozero= true;
            if(x==67) has67 = true;
        }
    cout<<(has67 && nozero ? "YES
":"NO
");
    }
}