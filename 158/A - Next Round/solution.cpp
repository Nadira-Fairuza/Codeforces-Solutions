#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int count = 0;
    int stop = a[k-1];
 
    for(int i = 0; i < n; i++) {
        if(a[i] >= stop && a[i] > 0) {
            count++;
        }
    }
 
    cout << count;
 
    return 0;
}