#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
 
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
 
        if(a == sorted_a) {
            cout << n << endl; // array is already sorted
        } else {
            cout << 1 << endl; // can delete everything else
        }
    }
 
    return 0;
}