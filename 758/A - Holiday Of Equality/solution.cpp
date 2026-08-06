#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int ans = 0;
 
    int mx = *max_element(a.begin(), a.end()); // 
    for(int i = 0; i < n; i++) {
        if(a[i] < mx) {
            ans += mx - a[i];
        }
    }
 
    cout << ans << endl; 
}    