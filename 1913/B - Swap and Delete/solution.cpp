#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int cnt0 = 0, cnt1 = 0;
 
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }
 
        int i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                // Need a '1'
                if (cnt1 == 0) break;
                cnt1--;
            }
            else {
                // Need a '0'
                if (cnt0 == 0) break;
                cnt0--;
            }
        }
 
        cout << s.size() - i << '
';
    }
}