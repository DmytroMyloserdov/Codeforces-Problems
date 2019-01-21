#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) 
{
	return b ? gcd (b, a % b) : a;
}

int main()
{
	int a, b, n; cin >> a >> b >> n;
	bool i = false;
	while (n > 0)
	{
		n -= (!i) ? gcd(a, n) : gcd(b, n);
		i = !i;
	}
	
	cout << !i;
}
