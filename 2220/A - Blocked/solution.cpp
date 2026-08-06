#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        set<int> s;
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (s.count(a[i]))
                ok = false;
 
            s.insert(a[i]);
        }
 
        if (!ok) {
            cout << -1 << '
';
            continue;
        }
 
        sort(a.rbegin(), a.rend());
 
        for (int x : a)
            cout << x << ' ';
 
        cout << '
';
    }
}