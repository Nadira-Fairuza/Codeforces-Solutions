#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
 
        long long noAI = (n + x + y - 1) / (x + y);
 
        long long withAI;
        long long done = x * z;
 
        if (done >= n) {
            withAI = (n + x - 1) / x;
        } else {
            long long rem = n - done;
            withAI = z + (rem + x + 10 * y - 1) / (x + 10 * y);
        }
 
        cout << min(noAI, withAI) << endl;
    }
 
    return 0;
}