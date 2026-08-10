#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
 
        // Already equal
        if (a == b) {
            cout << 0 << '
';
            continue;
        }
 
        int onesA = 0;
        int onesB = 0;
        int diff = 0;
 
        for (int i = 0; i < n; i++) {
            onesA += a[i];
            onesB += b[i];
//the number of 1s in a among the positions where a[i] != b[i].
            if (a[i] != b[i]) {
                diff += a[i];
            }
        }
//to have an odd sum,
// and an all-zero array has no such subsequence.
//b has to contain 0s
        // Impossible cases
        if (onesA == 0 || onesB == n) {
            cout << -1 << endl;
            continue;
        }
//because if there are even different in a then they 
//need to be flipped after spitting in half
        // One or two operations
        if (diff % 2 == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
 
    return 0;
}