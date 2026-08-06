#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int t = 1;
  cin >> t;
 
  for (int ti = 1; ti <= t; ++ti) {
    int n; 
    ll c, k;
    cin >> n >> c >> k;
 
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
 
    for (int i = 0; i < n; ++i) {
      if (a[i] > c) break;
      ll take = min(k, c - a[i]);
      k -= take;
      a[i] += take;
      c += a[i];
    }
 
    cout << c << "
";
  }
 
  return 0;
}