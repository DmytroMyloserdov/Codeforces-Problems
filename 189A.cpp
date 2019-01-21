#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c; cin >> n >> a >> b >> c;
	int dp[n  + 5] = {};
	
	if (a <= n) dp[a] = 1;
	if (b <= n) dp[b] = 1;
	if (c <= n) dp[c] = 1;
	
	int min_n = min(a, b);
	min_n = min(min_n, c);
	
	for (int i = min_n; i <= n; i++)
	{
		int max_i = 0;
		if (i >= a) max_i = max(max_i, dp[i - a]);
		if (i >= b) max_i = max(max_i, dp[i - b]);
		if (i >= c) max_i = max(max_i, dp[i - c]);
		
		if (max_i > 0) dp[i] = max_i + 1;
	}
	
	cout << dp[n];
}
