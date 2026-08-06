#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
 
        int k = n - (n % x) + y;
        if (k > n) k -= x;
 
        cout << k << '
';
    }
}