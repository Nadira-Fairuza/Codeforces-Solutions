#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
 
        long long prev = 0, ans = 0;
        int side = 0;
 
        for (int i = 0; i < n; i++) {
            long long a;
            int b;
            cin >> a >> b;
 
            long long gap = a - prev;
 
            if ((gap % 2) == (side ^ b))
                ans += gap;
            else
                ans += gap - 1;
 
            side = b;
            prev = a;
        }
 
        ans += m - prev;
 
        cout << ans << '
';
    }
}