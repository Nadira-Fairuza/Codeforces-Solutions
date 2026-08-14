#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
         int n, i, ans;
    cin >> n;
 
    vector<int> a(n);
    for (i = 0; i < n; ++i) cin >> a[i];
 
    ans = 0;
    if (is_sorted(a.begin(), a.end())) {
      ans = INT_MAX;
      for (i = 1; i < n; ++i) ans = min(ans, a[i]-a[i-1]+1);
      ans = (ans+1)/2;
    }
 
    cout << ans << "
";
 
    }
    return 0;
}