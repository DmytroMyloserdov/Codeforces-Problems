#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, s; cin >> s >> n;
	bool dead = false;
	vector< vector<int> > xy;
	
	for (int i = 0; i < n; ++i)
	{
		xy.push_back( vector<int> ());
		int x, y; cin >> x >> y;
		xy[i].push_back(x);
		xy[i].push_back(y);
	}
	
	sort(xy.begin(), xy.end());
	/*
	for (int i = 0; i < n; ++i)
	{
		cout << xy[i][0] << ' ' << xy[i][1] << endl;
	}
	*/
	if (xy[0][0] >= s)
	{
		cout << "NO";
		return 0;
	}
	if (xy[n - 1][0] < s)
	{
		cout << "YES";
		return 0;
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (s <= xy[i][0])
		{
			cout << "NO";
			return 0;
		}
		else
		{
			s += xy[i][1]; 
		}
	}
	
	cout << "YES";
}
