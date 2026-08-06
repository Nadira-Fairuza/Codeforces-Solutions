#include <bits/stdc++.h>
using namespace std;
 
int main() {
        string a;
        cin>>a;
        bool yes= false;
        for(int i=0;i<a.size();i++){
            if(a[i]=='H' || a[i]=='Q' || a[i]=='9' ){
                yes=true ;
                break;}
        }
        if(yes)cout<<"YES";
        else cout<<"NO";
}