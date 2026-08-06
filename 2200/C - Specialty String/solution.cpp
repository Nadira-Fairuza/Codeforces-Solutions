#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        bool changed = true;
 
        while (changed) {
            changed = false;
 
            for (int i = 1; i < (int)s.size(); i++) {
                if (s[i] == s[i - 1]) {
                    s.erase(i - 1, 2);
                    changed = true;
                    break;  
                }
            }
        }
 
        cout << (s.empty() ? "YES
" : "NO
");
    }
}