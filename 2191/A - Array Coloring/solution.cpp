#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        bool flag=true;
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]%2==0){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    if(a[i]%2!=0){
                        flag=false;
                        break;
                    }
                }
                if(i%2!=0){
                    if(a[i]%2==0){
                        flag=false;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(i%2!=0){
                    if(a[i]%2!=0){
                        flag=false;
                        break;
                    }
                }
                if(i%2==0){
                    if(a[i]%2==0){
                        flag=false;
                        break;
                    }
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}