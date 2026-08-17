#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> bea(n);
        vector<long long> ver(m);
 
        for (int i = 0; i < n; i++) {
            cin >> bea[i];
        }
 
        for (int i = 0; i < m; i++) {
            cin >> ver[i];
        }
        //first mountain - num of mountains +1
        long long beaTurns = bea[0] + n - 1;
        long long verTurns = ver[0] + m - 1;
 
        if (beaTurns >= verTurns) {
            cout << 1 << '
';
        }
        else {
            cout << 2 << '
';
        }
    }
 
    return 0;
}