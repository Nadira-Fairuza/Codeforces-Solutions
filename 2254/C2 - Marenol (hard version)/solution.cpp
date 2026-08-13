#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin>>a>>b;
 
    vector<int> odd1, even1;
    vector<int> odd2, even2;
 
    for (int i = 0; i < n; ++i) {
        if (a[i] == '1') {
            if ((i + 1) % 2) odd1.push_back(i + 1);
            else even1.push_back(i + 1);
        }
        if (b[i] == '1') {
            if ((i + 1) % 2 ) odd2.push_back(i + 1);
            else even2.push_back(i + 1);
        }
    }
 
    if (odd1.size() != odd2.size() || even1.size() != even2.size()) {
        cout << -1 << endl;
        return;
    }
 
    ll total_ops = 0;
 
    for (int i = 0; i < odd1.size(); ++i) {
        total_ops += abs(odd1[i] - odd2[i]) / 2;
    }
 
    for (int i = 0; i < even1.size(); ++i) {
        total_ops += abs(even1[i] - even2[i]) / 2;
    }
 
    cout << total_ops << endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}