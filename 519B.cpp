#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> f (n, 0);
	vector<int> s (n - 1 , 0);
	vector<int> t (n - 2 , 0);
	
	
	for (int i = 0; i < n; ++i)
	{
		cin >> f[i];
	}
	sort(f.begin(), f.end());
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> s[i];
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < n - 2; ++i)
	{
		cin >> t[i];
	}
	sort(t.begin(), t.end());
	
	int first = -1, second = -1;
	for (int i = 0; i < n - 1; ++i)
	{
		if (f[i] != s[i])
		{
			first = f[i];
			break;
		}
	}
	
	if (first == -1) first = f[n - 1];
	
	for (int i = 0; i < n - 2; ++i)
	{
		if (t[i] != s[i])
		{
			second = s[i];
			break;
		}
	}
	
	if (second == -1) second = s[n - 2];
	
	cout << first << endl << second;
}
