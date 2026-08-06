#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
 
        long long low = 1, high = 2e9, ans = 1;
 
        while(low <= high){
            long long mid = (low + high) / 2;
            long long total = mid * (mid - 1) / 2;  // sum of differences
 
            if(l + total <= r){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
 
        cout << ans << "
";
    }
    return 0;
}