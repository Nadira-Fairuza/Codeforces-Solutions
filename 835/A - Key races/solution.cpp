#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
 
    long long p1 = s*v1 + 2*t1;
    long long p2 = s*v2 + 2*t2;
 
    if(p1 < p2)
        cout << "First" << endl;
    else if(p1 > p2)    
        cout << "Second" << endl;
    else
        cout << "Friendship" << endl;    
 
    return 0;
}