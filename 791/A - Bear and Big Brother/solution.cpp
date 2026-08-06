#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    
    while(1){
        if(a>b){
            cout<<count;
            break;
        }
        a=a*3;
        b=b*2;
        count++;
    }
}