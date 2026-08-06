#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    float sum,frac;
    for(int i=1;i<=n;i++){
        cin>>x;
        frac=(float)x/100;
        sum+=x;
    }
    cout<<sum/n<<endl;
    return 0;
}