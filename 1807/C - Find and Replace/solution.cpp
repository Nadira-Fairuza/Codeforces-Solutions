#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        bool is=true;
        long long n;
        cin >> n ;
        string s;
        cin>>s;
        set<char>odd;
        set<char>even;
        for(int i=0;i<n;i++) {
            if(i%2){
                odd.insert(s[i]);
            }
            else even.insert(s[i]);
        }
 
        for(char c : odd) {
            if(even.find(c) == even.end()) {
                continue;
            }
            else {
                is = false;
            }
        }
        if(is){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
 