#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        string a, b;
 
        cin >> n >> m >> a >> b;
 
        int i = 0;
 
        for (int j = 0; j < m; j++) {
            if (i < n && a[i] == b[j]) {
                i++;
            }
        }
 
        cout << i << '
';
    }
}