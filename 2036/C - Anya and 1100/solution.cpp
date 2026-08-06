#include <bits/stdc++.h>
using namespace std;
 
bool is1100(string &s, int i) {
    if (i < 0 || i + 3 >= s.size()) return false;
    return s.substr(i, 4) == "1100";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int cnt = 0;
 
        for (int i = 0; i + 3 < s.size(); i++) {
            if (is1100(s, i)) cnt++;
        }
 
        int q;
        cin >> q;
 
        while (q--) {
            int i, v;
            cin >> i >> v;
            i--; 
 
            
            for (int j = i - 3; j <= i; j++) {
                if (is1100(s, j)) cnt--;
            }
 
            s[i] = char(v + '0');
 
            
            for (int j = i - 3; j <= i; j++) {
                if (is1100(s, j)) cnt++;
            }
 
            cout << (cnt > 0 ? "YES" : "NO") << '
';
        }
    }
 
    return 0;
}