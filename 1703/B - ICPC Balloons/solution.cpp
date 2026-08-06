#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        set<char> in;
 
        for (int i = 0; i < n; i++) {
            in.insert(s[i]);
        }
 
        int first = in.size();
 
        cout << first * 2 + (n - first) << endl;
    }
}