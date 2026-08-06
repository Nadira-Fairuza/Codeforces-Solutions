#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,s1,s2,s3,count=0;
    cin>>t;
    while(t--){
        cin>>s1>>s2>>s3;
        
        if(s1+s2+s3>=2)
            count++;
    }
    cout<<count<<endl;
}    
    
    
    
    
    
    