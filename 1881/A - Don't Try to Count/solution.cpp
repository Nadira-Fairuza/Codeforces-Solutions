#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int ans = -1;
 
        // Try up to 5 operations
        for (int i = 0; i <= 5; i++)
        {
            if (x.find(s) != string::npos)
            {
                ans = i;
                break;
            }
            x += x; // double the string
        }
 
        cout << ans << endl;
    }
}