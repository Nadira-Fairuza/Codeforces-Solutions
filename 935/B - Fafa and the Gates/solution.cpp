#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string m;
    cin>>m;
    int x=0, y=0, coins=0;
    for(int i=0; i<n; i++){
        if(m[i]=='U')
            y++;
        else
            x++;
        if(x==y && m[i]==m[i+1])
        coins++;
    
    }
    cout<<coins<<endl;
}