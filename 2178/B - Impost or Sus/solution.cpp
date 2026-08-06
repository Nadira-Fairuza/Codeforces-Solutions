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
        int ans = 0;
 
        if (s[0] == 'u') {
            ans++;
            s[0] = 's';
        }
 
        if (s[n - 1] == 'u') {
            ans++;
            s[n - 1] = 's';
        }
 
        for (int i = 1; i < n - 1; ) {
            if (s[i] == 'u') {
                int j = i;
                while (j < n - 1 && s[j] == 'u') j++;
 
                ans += (j - i) / 2;
                i = j;
            } else {
                i++;
            }
        }
 
        cout << ans << '
';
    }
}