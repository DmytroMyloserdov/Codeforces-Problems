#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; long long l; cin >> n >> l;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	sort(a, a + n);
	
	double d = 0;
	if (a[0] != 0) d = (double)a[0];
	
	for (int i = 0; i < n - 1; i++)
	{
		d = max(d, (a[i + 1] - a[i]) / 2.0);
	}
	
	d = max(d, (double)l - a[n - 1]);
	cout.precision(9);
	cout << d;
}
