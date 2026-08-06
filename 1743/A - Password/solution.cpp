#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        // ignore banned digits input
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }
    //order doesnt matter
        cout << 3 * (10 - n) * (9 - n) << endl;
    }
}