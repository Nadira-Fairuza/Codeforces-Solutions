#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        string temp = s;
 
        // Find maximum
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 1; i < n - 1; i++) {
                if (temp[i - 1] == '1' && temp[i] == '0' && temp[i + 1] == '1') {
                    temp[i] = '1';
                    changed = true;
                }
            }
        }
 
        int mx = count(temp.begin(), temp.end(), '1');
 
        // Find minimum from maximized string
        string mnTemp = temp;
        changed = true;
 
        while (changed) {
            changed = false;
            for (int i = 1; i < n - 1; i++) {
                if (mnTemp[i - 1] == '1' && mnTemp[i] == '1' && mnTemp[i + 1] == '1') {
                    mnTemp[i] = '0';
                    changed = true;
                }
            }
        }
 
        int mn = count(mnTemp.begin(), mnTemp.end(), '1');
 
        cout << mn << " " << mx << endl;
    }
 
    return 0;
}