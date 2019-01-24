#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t; cin >> n >> t;
	n--;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	t--;
	
	int pos = 0;
	
	for ( ; pos < t; pos += a[pos]) ;
	if (pos == t) cout << "YES";
	else cout << "NO";
}
