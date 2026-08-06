#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char dir;
    string s;
 
    cin >> dir >> s;
 
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
    for (char c : s) {
        int pos = kb.find(c);
 
        if (dir == 'R')
            cout << kb[pos - 1];
        else
            cout << kb[pos + 1];
    }
}