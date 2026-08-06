#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
 
        ll mod = n % 12;
        ll times = n / 12;
 
        if (n == 10) {
            cout << -1 << '
';
            continue;
        }
 
        if (mod != 10) {
            cout << mod << ' ' << 12 * times << '
';
        } else {
            cout << 22 << ' ' << 12 * (times - 1) << '
';
        }
    }
}