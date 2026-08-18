#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin >> t;
 
while (t--) {  
    int n, m;  
    cin >> n >> m;  
 
    set<char> words;  
 
    // Put the first letter of every word into the set  
    for (int i = 0; i < n; i++) {  
        string s;  
        cin >> s;  
        words.insert(toupper(s[0]));  
    }  
 
    bool possible = true;  
 
    // Check every abbreviation  
    for (int i = 0; i < m; i++) {  
        string s;  
        cin >> s;  
 
        for (char c : s) {  
            if (words.find(c) == words.end()) {  
                possible = false;  
            }  
        }  
    }  
 
    cout << (possible ? "YES" : "NO") << endl;  
}  
 
return 0;
 
}