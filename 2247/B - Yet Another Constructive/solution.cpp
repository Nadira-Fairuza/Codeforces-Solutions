#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        long long n, k, m;
        cin >> n >> k >> m;
 
        if (k > m) {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        if (k == m) {
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << "
";
        } else {
            for (int i = 1; i <= n; i++) {
                if (i < k) cout << 1 << " ";
                else if (i == k) cout << (m - k + 1) << " ";
                else cout << 1 << " ";
            }
            cout << "
";
        }
    }
 
    return 0;
}