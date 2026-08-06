#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        long long a;
        cin >> n >> a;
 
        int x = 0, y = 0;
 
        for(int i = 0; i < n; i++){
            long long v;
            cin >> v;
 
            if(v < a) x++;
            else if(v > a) y++;
        }
 
        if(x > y) cout << a - 1 << endl;
        else cout << a + 1 << endl;
    }
}