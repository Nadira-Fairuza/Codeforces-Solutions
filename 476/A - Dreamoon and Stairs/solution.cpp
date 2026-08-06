#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, ans;
    cin >> n >> m;
 
    ans = (n + 1) / 2;
 
    while (ans <= n && ans % m != 0) {
        ans++;
    }
 
    if (ans <= n) cout << ans;
    else cout << -1;
}