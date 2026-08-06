#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        int sum_a = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum_a += a[i];
        }
        int diff = s - sum_a;
        if(diff >= 0 && diff % x == 0) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}