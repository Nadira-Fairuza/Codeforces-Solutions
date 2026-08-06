#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,cnt=0;
        cin>>a>>b>>c;
        int x=max({a,b,c});
        int z=min({a,b,c});
        int y= a+b+c-x-z;
        for(int i=0;i<x;i++){
            if(x==y || y==z || x==z){
                cout<<cnt<<endl;break;
            }
            else{
              x-=1;
              z+=1;
              cnt++;
            }
        }
 
    }
 
}