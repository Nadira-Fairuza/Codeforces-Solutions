#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, w;
        cin >> n >> w;
 
        if (w == 1) {
            cout << 0 << endl;
        }
        else {
            long long ans = n - (n / w);
            cout << ans << endl;
        }
    }
}