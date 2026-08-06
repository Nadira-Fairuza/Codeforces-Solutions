#include <bits/stdc++.h>
using namespace std;
 
vector<int> bit;
 
void update(int idx, int val, int n) {
    idx++;
    while (idx <= n) {
        bit[idx] += val;
        idx += idx & -idx;
    }
}
 
int query(int idx) {
    idx++;
    int sum = 0;
    while (idx > 0) {
        sum += bit[idx];
        idx -= idx & -idx;
    }
    return sum;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        vector<int> pos(n);
        vector<bool> used(n, false);
 
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
 
            while (j < n && used[j]) j++;
 
            if (j == n) {
                ok = false;
                break;
            }
 
            used[j] = true;
            pos[i] = j;
        }
 
        if (!ok) {
            cout << -1 << '
';
            continue;
        }
 
        bit.assign(n + 1, 0);
 
        long long ans = 0;
 
        for (int i = n - 1; i >= 0; i--) {
            ans += query(pos[i]);
            update(pos[i], 1, n);
        }
 
        cout << ans << '
';
    }
}