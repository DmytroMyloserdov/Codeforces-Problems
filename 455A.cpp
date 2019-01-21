#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m = 0; cin >> n;
	long long cnt[100005];
	for (int i = 0; i <= 100004; i++) cnt[i] = 0;
	
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		cnt[temp]++;
		if (temp > m) m = temp;
	}
	
	long long dp[100005];
	dp[0] = 0;
	dp[1] = cnt[1];
	
	for (long long i = 2; i <= m; i++)
	{
		dp[i] = (long long)max(dp[i - 1], dp[i - 2] + cnt[i] * i);
	}
	
	cout << dp[m];
}
