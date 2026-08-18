#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        unordered_set<int> a;
        vector<int> ans(2 * n + 1);
 
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                int x;
                cin >> x;
                a.insert(x);
 
                if(i == 1) {
                    ans[j + 1] = x;
                }
 
                if(j == n && i > 1) {
                    ans[n + i] = x;
                }
            }
        }
 
        for(int i = 1; i <= 2 * n; i++) {
            if(a.find(i) == a.end()) {
                ans[1] = i;
                break;
            }
        }
 
        for(int i = 1; i <= 2 * n; i++) {
            cout << ans[i] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}