#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long p, q;
        cin >> p >> q;
 
        long long k = 3*p - 2*q;
 
        if(k >= 0 && k < min(p, q)){
            cout << "Bob" << endl;
        } else {
            cout << "Alice" <<endl;
        }
    }
}