#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<long long> a(n + 2), b(n + 2);
 
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
 
        // Step 1: propagate from right to left
        for (int i = n; i >= 1; i--) {
            a[i] = max({a[i], b[i], a[i + 1]});
        }
 
        // Step 2: prefix sum
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i];
        }
 
        // Step 3: answer queries
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << '
';
        }
    }
 
    return 0;
}