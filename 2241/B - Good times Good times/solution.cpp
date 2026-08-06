#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int digits(int x) {
  int ret = 0;
  while (x > 0) {
    ret += 1;
    x /= 10;
  }
  return ret;
}
 
int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int tc = 1;
  cin >> tc;
 
  for (int ti = 1; ti <= tc; ++ti) {
    int x;
    cin >> x;
 
    int y = 1;
    for (int i = digits(x) - 1; i >= 0; --i) y *= 10;
    y += 1;
 
    cout << y << "
";
  }
 
  return 0;
}