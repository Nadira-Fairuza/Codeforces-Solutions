#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t=1;
    cin >> t;
 
    while(t--){
        int n,flag=1;
        cin >> n;
        int arr[n][n];
 
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                cin >> arr[row][col];
            }
        }
        
        int mx = arr[0][0];
 
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                if(mx<arr[row][col])
                    mx = arr[row][col];
            }
        }
 
        int freq[mx+1]={};
 
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                freq[arr[row][col]]++;
            }
        }  
        
        for (int i=0; i<mx+1; i++){
            if(freq[i]>n*(n-1)){
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout << "NO" << endl;
        else if (flag==1)   
            cout << "YES" << endl;
 
    }
 
    return 0;
}