#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t, n, a, b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		cout<<(((long long)b * n <= a || b >= a) ? "1
" : "2
");
	}
	return 0;
}