#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ll n, x; cin >> n >> x;
	int count = 0;
	int sqrt_x = ceil(sqrt(x));
	
	for (int i = 2; i < sqrt_x && i <= n; ++i)
	{
		if (x % i == 0 && x / i <= n) count += 2;
	}
	
	if (x == 1)
	{
		cout << 1;
		return 0;
	}
	if (x <= n) count += 2;
	if (sqrt_x * 1ll * sqrt_x == x && sqrt_x <= n) count++;
	
	cout << count;
}
