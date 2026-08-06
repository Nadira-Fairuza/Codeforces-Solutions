#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
 
        for (int i = 0; i < n;) {
            if (i + 2 < n && s[i] == 'o' && s[i+1] == 'g' && s[i+2] == 'o') {
                ans += "***";
                i += 3;
                while (i + 1 < n && s[i] == 'g' && s[i+1] == 'o')
                    i += 2;
            } else {
                ans += s[i++];
            }
        }
 
        cout << ans;
 
 
    return 0;
}