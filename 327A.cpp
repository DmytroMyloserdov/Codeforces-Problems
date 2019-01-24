#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	bool a[n] = {};
	int max_one = 0;
	for (int i = 0; i < n; ++i)
	{
		bool t; cin >> t;
		a[i] = t;
		max_one += t;
	}
	
	if (n == 1) 
	{
		cout << !a[0];
		return 0;
	}
	if(n == max_one)
	{
		cout << n - 1;
		return 0;
	}
	
	int dp[n][n] = {};
	for (int i = 0; i < n; ++i)
	{
		dp[i][i] = !a[i];
	}
	
	int max_d = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (!a[j])
			{
				dp[i][j] = dp[i][j - 1] + 1;
				max_d = max(max_d, dp[i][j]);
			}
			else
			{
				dp[i][j] = dp[i][j - 1] - 1;
				max_d = max(max_d, dp[i][j]);
			}
		}
	}	
	
	//for (int i = 0; i < n; i++) cout << dp[0][i] << ' ';
	//cout << endl; 
	cout << max_d + max_one;
}
