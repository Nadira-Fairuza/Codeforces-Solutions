#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
 
        for (int i = 0; i < n; i++) {
            if (p[i] != n - i) {
                int j = i;
                while (p[j] != n - i) j++;
                reverse(p.begin() + i, p.begin() + j + 1);
                break;
            }
        }
 
        for (int x : p) cout << x << " ";
        cout << "
";
    }
}