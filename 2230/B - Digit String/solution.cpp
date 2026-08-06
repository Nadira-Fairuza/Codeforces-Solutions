#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
 
        vector<int> pre2(n + 1, 0);
        vector<int> suf13(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            pre2[i + 1] = pre2[i] + (s[i] == '2');
        }
 
        for (int i = n - 1; i >= 0; i--) {
            suf13[i] = suf13[i + 1] + (s[i] == '1' || s[i] == '3');
        }
 
        int keep = 0;
        for (int i = 0; i <= n; i++) {
            keep = max(keep, pre2[i] + suf13[i]);
        }
 
        cout << n - keep << '
';
    }
}