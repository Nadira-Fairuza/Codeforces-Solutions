#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;
 
        long long ans = abs(a - b);
 
        long long va = a;
        int sa = 0;
 
        while (true) {
            long long vb = b;
            int sb = 0;
 
            while (true) {
                long long total =sa + sb + abs(va - vb);
                ans = min(ans,total);
 
                if (vb == 0) break;
                vb /= x;
                sb++;
            }
 
            if (va == 0) break;
            va /= x;
            sa++;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}