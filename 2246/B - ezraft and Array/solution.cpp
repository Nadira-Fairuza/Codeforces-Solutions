#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        if(n == 1){
            cout<<1<<endl;
            continue;
        }
        else if(n==2){
            cout<<-1<<endl;
            continue;
        }
        n-=3;
        long long ans = 3;
        cout<<"1 2 3 ";
        while(n--)
        {
        ans*=2;
        cout<<ans<<" ";
        }
    cout<<endl;
 
    }
    return 0;
}