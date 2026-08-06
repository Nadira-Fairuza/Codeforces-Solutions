#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
 
        vector<long long> m(n);
 
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }
 
        long long prev = 0;
 
        for (int i = 0; i < n; i++) {
 
            long long gap = m[i] - prev;
 
            f -= min(gap * a, b);
 
            prev = m[i];
        }
 
        if (f > 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}