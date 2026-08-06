#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(k + 1), b(n + 1);
        vector<vector<int>> level(k + 2);
 
        for (int i = 1; i <= k; i++) cin >> a[i];
 
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
            level[b[i]].push_back(i);
        }
 
        vector<int> ans;
 
        for (int i = k; i >= 1; i--) {
            for (int course : level[i]) {
                for (int j = i; j <= k; j++) {
                    ans.push_back(course);
                }
            }
        }
 
        cout << ans.size() << "
";
        for (int x : ans) cout << x << " ";
        cout << "
";
    }
 
    return 0;
}