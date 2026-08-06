#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        vector<long long> ans;
        long long p = 10;
 
        for (int k = 1; k <= 18; k++) {
            if (p > 1e18) break;
 
            long long d = p + 1;
            if (n % d == 0) ans.push_back(n / d);
 
            if (p > 1e17) break;
            p *= 10;
        }
 
        sort(ans.begin(), ans.end());
 
        if (ans.empty()) {
            cout << 0 << '
';
        } else {
            cout << ans.size();
            for (auto x : ans) cout << " " << x;
            cout << '
';
        }
    }
 
    return 0;
}