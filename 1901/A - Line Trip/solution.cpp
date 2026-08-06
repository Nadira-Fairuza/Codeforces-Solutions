#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n,x;
        cin >> n >> x;
 
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
 
        int md = arr[0];  
 
        for(int i=1;i<n;i++){
            md = max(md, arr[i] - arr[i-1]);
        }
 
        md = max(md, 2*(x - arr[n-1]));
 
        cout << md << endl;
    }
 
    return 0;
}