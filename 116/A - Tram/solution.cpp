#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    int pass = 0, maxpass = 0;
 
    while(t--){
        int a, b;
        cin >> a >> b;
 
        pass += b - a;
        if(pass > maxpass){
            maxpass = pass;
        }
    }
 
    cout << maxpass;
    return 0;
}