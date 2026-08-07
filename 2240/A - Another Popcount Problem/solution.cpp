#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int rem, k;
        cin >> rem >> k;
 
        int ans = 0;
        int cost = 1;
 
        while (cost <= rem) {
            int used = min(k, rem / cost);
 
            ans += used;
            rem -= used * cost;
 
            cost *= 2;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}