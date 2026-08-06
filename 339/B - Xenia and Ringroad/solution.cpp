#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    long long cur = 1;
    long long ans = 0;
 
    for (int i = 0; i < m; i++) {
        long long x;
        cin >> x;
 
        if (x >= cur)
            ans += x - cur;
        else
            ans += (n - cur) + x;
 
        cur = x;
    }
 
    cout << ans << '
';
    return 0;
}