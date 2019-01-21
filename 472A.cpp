#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	
	vector<bool> prime (n + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 0; i < n + 1; i++)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j = i*i; j < n + 1; j += i)
					prime[j] = false;
					
	for (int i = 4; i < n; i++)
	{
		if (!prime[i] && !prime[n - i]) 
		{
			cout << i << ' ' << n - i;
			return 0;
		}
	}
}
