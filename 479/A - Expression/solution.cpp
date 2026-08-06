#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    vector<int>v(3);
    cin>>v[0]>>v[1]>>v[2];
 
    int mx1=v[0]+v[1]*v[2];
    int mx2=v[0]*(v[1]+v[2]);
    int mx3=v[0]*v[1]*v[2];
    int mx4=(v[0]+v[1])*v[2];
    int mx5=v[0]+v[1]+v[2];
    cout<<max({mx1,mx2,mx3,mx4,mx5});
 
}