#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t > 0){
    t--;
    int n, max = 0, count = 1;
    cin >> n;
    while (n > 0){
        n--;
        int a;
        cin >> a;
        if (a > max){
            max = a;
            count = 0;
        }
        if (a == max)
        count++;
    }
    cout << count << endl;
}
}