#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    cin >> a;
 
    int b = ((a / 100) * 10) + (a % 10);
    int c = a / 10;
 
    cout << max({a, b, c});
}