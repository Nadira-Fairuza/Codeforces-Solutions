#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    if (n >= 27) {
        cout << m << endl;
    } else {
        long long p = 1LL << n; // 2^n
        cout << (m % p) << endl;
    }
}