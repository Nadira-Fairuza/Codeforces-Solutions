#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--){
        char a[6];
        for(int i=0;i<6;i++){
            cin>>a[i];
        }
        char temp=a[0];
        a[0]=a[3];
        a[3]=temp;
        for(int i=0;i<6;i++){
            cout<<a[i];
            if(i==2)cout<<' ';
        }
        cout<<"
";
    }
}