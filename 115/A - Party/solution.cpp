#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> p(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
 
    int ans = 0;
 
    for (int i = 1; i <= n; i++) {
        int cur = i;
        int depth = 1;
 
        while (p[cur] != -1) {
            depth++;
            cur = p[cur];
        }
 
        ans = max(ans, depth);
    }
 
    cout << ans;
}