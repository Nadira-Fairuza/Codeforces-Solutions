#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string res;
 
    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            if (!res.empty() && res.back() != ' ')
                res += ' ';
            i += 3;
        } else {
            res += s[i];
            i++;
        }
    }
 
    if (!res.empty() && res.back() == ' ')
        res.pop_back();
 
    cout << res;
}