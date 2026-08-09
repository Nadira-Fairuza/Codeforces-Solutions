#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        bool ok=false;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //"Can I choose one integer k that is smaller than every
        //odd-position weight and larger than every even-position weight?"
        int oddMin = INT_MAX;
        int evenMax = INT_MIN;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                oddMin = min(oddMin, a[i]);
            } else {
                evenMax = max(evenMax, a[i]);
            }
        }
        if (oddMin - evenMax > 1)ok=true;
        if(n==1 || n%2==1)ok=false;
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}