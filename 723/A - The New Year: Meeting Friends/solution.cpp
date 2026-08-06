#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x1, x2, x3, mindistance=0;
    cin>>x1>>x2>>x3;
    
    if(x1>x2 && x1<x3){
        mindistance= x3-x2;
    }
    else if(x2>x1 && x2<x3){
        mindistance= x3-x1;
    }
    else if(x3>x2 && x3<x1){
        mindistance= x1-x2;
    }
    else if(x1>x3 && x1<x2){
        mindistance= x3-x2;
    }
    else if(x2>x3 && x2<x1){
        mindistance= x3-x1;
    }
    else if(x3>x1 && x3<x2){
        mindistance= x1-x2;
    }
    
    cout<<abs(mindistance);
    
}