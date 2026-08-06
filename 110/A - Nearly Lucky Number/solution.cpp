#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string lucky;
    cin >> lucky;
 
    int countLuckyDigits = 0;
 
   
    for (int i = 0; i < lucky.length(); i++) {
        if (lucky[i] == '4' || lucky[i] == '7') {
            countLuckyDigits++;
        }
    }
 
    // Convert count to string
    string countStr = to_string(countLuckyDigits);
 
    for (int i = 0; i < countStr.length(); i++) {
        if (countStr[i] != '4' && countStr[i] != '7') {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
    return 0;
}