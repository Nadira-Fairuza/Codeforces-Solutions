#include <bits/stdc++.h>
using namespace std;
 
int main() {
    bool ok=false;
    string a,b;
    cin>>a;
    for(int i=0;i<5;i++){
        cin>>b;
        if(a[0]==b[0] || a[1]==b[1]){
            ok=true;
            break;
        }
    }
    cout<<(ok?"YES":"NO");
    return 0;
}