#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    int mm=min(a,b);
    int mx=max(a,b);
    cout<<mm<<" "<<(mx-mm)/2;
}