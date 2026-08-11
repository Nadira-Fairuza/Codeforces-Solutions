#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    string x, y;
    cin >> x >> y;
 
    int n = x.length();
    bool first_diff = false;
 
    for (int i = 0; i < n; ++i) {
        if (x[i] != y[i]) {
            if (!first_diff) {
 
                if (x[i] < y[i]) {
                    swap(x[i], y[i]);
                }//only swap once to make x bigger
                first_diff = true;
            } else {
 
                if (x[i] > y[i]) {
                    swap(x[i], y[i]);
                }
            }
        }
    }
 
    cout << x << "
" << y << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}