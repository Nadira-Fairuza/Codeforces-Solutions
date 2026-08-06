#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, p, q;
    cin >> n >> p;
 
    int arr1[p];
    for(int i = 0; i < p; i++){
        cin >> arr1[i];
    }
 
    cin >> q;
    int arr2[q];
    for(int i = 0; i < q; i++){
        cin >> arr2[i];
    }
 
    set<int> unique_elements;
 
    for(int i = 0; i < p; i++){
        unique_elements.insert(arr1[i]);
    }
 
    for(int i = 0; i < q; i++){
        unique_elements.insert(arr2[i]);
    }
 
    if(unique_elements.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}