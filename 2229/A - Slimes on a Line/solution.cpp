#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
    
        int x;
        cin >> x;
        int mn = x, mx = x;
 
        for (int i = 1; i < n; i++) {
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }
        cout << (mx - mn + 1) / 2 << '
';
    }
}