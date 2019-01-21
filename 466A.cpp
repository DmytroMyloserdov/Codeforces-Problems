#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a, b; cin >> n >> m >> a >> b;
	
	if (m * a < b) cout << n * a;
	else
	{
		int sum = 0;
		int t = n / m;
		sum += t * b;
		n -= t * m;
		if (n * a > b) sum += b;
		else sum += n * a;
		
		cout << sum;
	}
}
