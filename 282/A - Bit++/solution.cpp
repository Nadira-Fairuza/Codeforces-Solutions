#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, x = 0;
    cin >> t;
 
    string operation;
 
    for(int i = 0; i < t; i++){
        cin >> operation;
 
        if(operation[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
 
    cout << x << endl;
}