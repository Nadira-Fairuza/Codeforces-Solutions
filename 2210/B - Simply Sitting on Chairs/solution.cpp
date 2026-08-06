#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int max_points = 0;
    for (int i = 1; i <= n; i++) {
        int p_i;
        cin >> p_i;
        
        
        if (p_i <= i) {
            max_points++;
        }
    }
    
    cout << max_points << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}