#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(long long x) {
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (isPrime(n + 1))
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}