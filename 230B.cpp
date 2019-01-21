#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	long long a[n] = {};
	
	vector<bool> prime (1000001, true);
	prime[0] = prime[1] = false;
	
	for (int i = 2; i <= 1000001; ++i)
		if (prime[i])
			if (1ll * i * i <= 1000001)
				for (int j = i * i; j <= 1000001; j += i)
					prime[j] = false;
	
	for (int i = 0; i < n; ++i) cin >> a[i];
	
	for (int i = 0; i < n; ++i)
	{
		int temp = (int)sqrt(a[i]);
		if (temp * 1ll * temp == a[i] && prime[temp]) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
