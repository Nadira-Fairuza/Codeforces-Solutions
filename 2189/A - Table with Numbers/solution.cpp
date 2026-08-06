#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    if (h > l) {
        swap(h, l);
    }
    int x;
    int cnth = 0, cntl = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x <= h) {
            cnth++;
        }
        if (x <= l){
            cntl++;
        }
    }
    cout << min(cnth, cntl / 2)<< '
';
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}