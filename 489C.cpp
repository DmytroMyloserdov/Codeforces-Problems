#include<bits/stdc++.h>

using namespace std;

int main()
{
	int m, s; cin >> m >> s;
	int min[m] = {}, max[m] = {};
	
	if (m * 9 < s)
	{
		cout << "-1 -1";
		return 0;
	}
	
	int temp_s = s;
	for (int i = m - 1; i >= 0; --i)
	{
		if (temp_s > 9)
		{
			min[i] = 9;
			temp_s -= 9;
		}
		else
		{
			if (temp_s > 1) min[i] = temp_s - 1;
			min[0]++;
			break;
		}
	}
	
	if (s == 0)
	{
		if (m == 1) cout << 0;
		else cout << -1; 
	}
	else
	{
		for (int i = 0; i < m; i++) cout << min[i];
	}
	cout << ' ';
	
	temp_s = s;
	
	for (int i = 0; i < m; ++i)
	{
		if (temp_s >= 9)
		{
			max[i] = 9;
			temp_s -= 9;
		}
		else
		{
			max[i] = temp_s;
			break;
		}
	}
	
	if (s == 0)
	{
		if (m == 1) cout << 0;
		else cout << -1;
	}
	else
	{
		for (int i = 0; i < m; i++) cout << max[i];
	}
}
