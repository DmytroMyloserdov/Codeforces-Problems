#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	long long a[n];
	
	for (int i = 0; i < n; i++) cin >> a[i];
	
	int dp[n];
	for (int i = 0; i < n; i++) dp[i] = 1;
	
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= a[i - 1]) dp[i] += dp[i - 1];
	}
	
	sort(dp, dp + n);
	
	cout << dp[n - 1];
}
