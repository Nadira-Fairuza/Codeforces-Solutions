#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<vector<int>> a(n, vector<int>(n));
        vector<bool> used(2*n + 1, false);
 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                used[a[i][j]] = true;
            }
        }
 
        int p1;
        for(int x = 1; x <= 2*n; x++) {
            if(!used[x]) {
                p1 = x;
                break;
            }
        }
 
        cout << p1 << " ";
 
        for(int j = 0; j < n; j++)
            cout << a[0][j] << " ";
 
        for(int i = 1; i < n; i++)
            cout << a[i][n-1] << " ";
 
        cout << "
";
    }
 
    return 0;
}