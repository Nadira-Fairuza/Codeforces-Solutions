#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<long long> a;
        int i = 1;
 
        while(a.size() < n) {
            if(i % 3 != 0 && i % 10 != 3) {
                a.push_back(i);
            }
            i++;
        }
 
        cout << a[n - 1] << endl;
    }
}