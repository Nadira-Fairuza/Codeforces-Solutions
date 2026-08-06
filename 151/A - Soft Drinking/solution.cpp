#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n,k,l,c,d,p,nl,np,drink,lime,salt,toast;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink=k*l/nl;
    lime=c*d;
    salt=p/np;
    toast=min({drink,lime,salt})/n;
    cout<<toast<<endl;
 
}