#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m, n;
    cin >> m >> n;
 
    string grid[m];
    
    for(int row = 0; row < m; row++){
    cin >> grid[row];
 
    for(int column = 0; column < n - 1; column++){
        if(grid[row][column] != grid[row][column + 1]){
            cout << "NO";
            return 0;
        }
    }
    }
    for(int i = 0; i < m - 1; i++){
        if(grid[i] == grid[i + 1]){
            cout << "NO";
            return 0;
        }
    }
    
    
 
    cout << "YES";
}