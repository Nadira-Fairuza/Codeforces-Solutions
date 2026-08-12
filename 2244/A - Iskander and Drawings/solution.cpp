#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int maxLen = 0;
        int current = 0;
 
        for (char c : s) {
            if (c == '#') {
                current++;
                maxLen = max(maxLen, current);
            } else {
                current = 0;
            }
        }//we only need ceil of half of the length of the 
        //longest consecutive # (hihi)
 
        cout << (maxLen + 1) / 2 << '
';
    }
 
    return 0;
}