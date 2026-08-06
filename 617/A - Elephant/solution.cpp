#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,r,count=0;
    cin>>x;
    if(x>=5){
        count=x/5;
        r=x%5;
    }
    if(r!=0){
        count++;
    }
        cout<<count;
        return 0;
}