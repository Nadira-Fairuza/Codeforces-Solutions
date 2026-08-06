#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n + 1);
 
       
        p[1] = 2;
        for (int i = 2; i <= n; i++) {
            p[i] = p[i - 1] * 2;
        }
 
        int a = 0, b = 0;
 
        a += p[n]; 
        for (int i = 1; i < n / 2; i++) {
            a += p[i];
        }
 
        
        for (int i = n / 2; i < n; i++) {
            b += p[i];
        }
 
        cout << abs(a - b) << endl;
    }
 
    return 0;
}