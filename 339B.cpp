#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n, m; cin >> n >> m;
	ll d[m];
	
	ll time = 0;
	ll curr = 1;
	
	for (ll i = 0; i < m; i++)
	{
		cin >> d[i];
		
		if (d[i] >= curr)
		{
			time += d[i] - curr;
		}
		else
		{
			time += n - curr + d[i];
		}
		
		curr = d[i];
	}
	
	cout << time;
}
