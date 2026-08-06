#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int zero = 0, one = 0;
 
        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }
 
        int bad = n / 2 - k;
 
        if (bad <= min(zero, one) &&
            (zero - bad) % 2 == 0 &&
            (one - bad) % 2 == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}