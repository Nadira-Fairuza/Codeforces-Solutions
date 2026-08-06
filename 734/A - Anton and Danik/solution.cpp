#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,A=0,D=0;
    char x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x=='A'){
            A++;
        }
        else
            D++;
    }
    if(A>D)
        cout<<"Anton"<<endl;
    else if(A<D)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}