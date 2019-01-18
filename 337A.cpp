#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	vector<int> f;
	n--;
	
	for (int i = 0; i < m; i++)
	{
		int temp; cin >> temp;
		f.push_back(temp);
	}
	
	sort(f.begin(), f.end());
	
	int min_d = 20000;
	for (int i = 0; i < m - n; i++)
	{
		min_d = min(f[i + n] - f[i], min_d);
	}
	
	cout << min_d;
}
