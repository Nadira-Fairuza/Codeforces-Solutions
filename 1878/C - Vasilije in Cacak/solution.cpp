#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, k, x;
		cin >> n >> k >> x; 
 
		//lowest k sum
		long long minimum_sum = (k * (k + 1)) / 2;
 
		// This is the sum of the largest k numbers from 1 to n
		long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
 
		// Check if x is within the range of possible sums
		if (x >= minimum_sum && x <= maximum_sum)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}