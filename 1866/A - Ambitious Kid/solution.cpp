#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=abs(a[i]);
    }
    int minarr=a[0];
    for(int i=1;i<n;i++){
        if(minarr>a[i]){
            minarr=a[i];
        }
    }
    cout<<minarr<<endl;
}