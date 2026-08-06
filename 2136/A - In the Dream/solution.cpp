#include <bits/stdc++.h>
using namespace std;
 
bool ok(int x, int y){
    return max(x,y) <= 2*(min(x,y)+1);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
 
        if(ok(a,b) && ok(c-a,d-b))
            cout << "YES
";
        else
            cout << "NO
";
    }
}