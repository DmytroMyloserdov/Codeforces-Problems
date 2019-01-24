#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	if (n < m)
	{
		cout << -1;
		return 0;
	}
	
	int min = n / 2 + n % 2;
	
	while (min % m != 0)
	{
		min++;
	}
	
	
	cout << min;
}
