#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
 
        if (a > b) {
            if ((a ^ 1) == b) cout << y << '
';
            else cout << -1 << '
';
            continue;
        }
 
        long long ans = 0;
 
        for (long long i = a; i < b; i++) {
            if (i % 2 == 0) ans += min(x, y);
            else ans += x;
        }
 
        cout << ans << '
';
    }
}