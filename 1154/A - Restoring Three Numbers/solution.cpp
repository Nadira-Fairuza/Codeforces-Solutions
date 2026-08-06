#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> a(4);
    for (int &x : a) cin >> x;
 
    int mx = *max_element(a.begin(), a.end());
 
    for (int x : a) {
        if (mx - x != 0)
            cout << mx - x << " ";
    }
}