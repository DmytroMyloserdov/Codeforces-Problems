#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int max_a = 0, a[n] = {};
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		max_a = max(max_a, a[i]);
	}
	
	long long count = 0;
	for (int i = 0; i < n; ++i)
	{
		count += max_a - a[i];
	}
	
	cout << count;
}
