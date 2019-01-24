#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	map<int, int> m;
	
	for (int i = 0; i < n; ++i)
	{
		int t; cin >> t;
		m.insert(pair<int, int> (t, 1));
	}
	
	int first, second;
	for (int i = 0; i < n - 1; ++i)
	{
		int t; cin >> t;
		m[t]++;
	}
	for (int i = 0; i < n - 2; ++i)
	{
		int t; cin >> t;
		m[t]++;
	}
	
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		if (it->second == 1) first = it->first;
		if (it->second == 2) second = it->first;
	}
	
	cout << first << endl << second;
}
