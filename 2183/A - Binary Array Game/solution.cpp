#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        bool all1 = true;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                all1 = false;
        }
 
        if (all1 || a[0] == 1 || a[n - 1] == 1)
            cout << "Alice
";
        else
            cout << "Bob
";
    }
}