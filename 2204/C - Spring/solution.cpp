#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
using i128 = __int128_t;
 
long long lcm_limit(long long a, long long b) {
    return a / gcd(a, b) * b;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;
 
        long long A = m / a;
        long long B = m / b;
        long long C = m / c;
 
        long long AB = m / lcm_limit(a, b);
        long long AC = m / lcm_limit(a, c);
        long long BC = m / lcm_limit(b, c);
 
        long long ABC =
            m / lcm_limit(lcm_limit(a, b), c);
 
        long long alice = 6 * A - 3 * AB - 3 * AC + 2 * ABC;
        long long bob   = 6 * B - 3 * AB - 3 * BC + 2 * ABC;
        long long carol = 6 * C - 3 * AC - 3 * BC + 2 * ABC;
 
        cout << alice << ' ' << bob << ' ' << carol << '
';
    }
}