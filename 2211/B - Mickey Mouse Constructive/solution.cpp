#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    long long MOD = 676767677;
    cin>>t;
    while(t--){
            int x, y; cin >> x >> y;
    if (x == y) {
        cout << 1 << endl;
        for (int i = 0; i < x; i++)
            cout << "1 ";
        for (int i = 0; i < x; i++)
            cout << "-1 ";
        cout << endl;
        continue;
 
    }
    int mn = min(x, y) , mx = max(x, y);
    int d = mx - mn, c = 0;
    for (int i = 1; i * i <= d; i++) {
        if (d % i == 0) {
            c = (c + 1) % 676767677;
            if (i * i != d)
                c = (c + 1) % 676767677;
        }
    }
    cout << c << endl;
    if (x > y) {
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << endl;
    }
    else {
        for (int i = 0; i < y; i++) cout << -1 << " ";
        for (int i = 0; i < x; i++) cout << 1 << " ";
            cout << endl;
    }
    }
    return 0;
}