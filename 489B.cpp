#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int m; cin >> m;
	vector<int> b(m, 0);
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int pairs = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (abs(a[i] - b[j]) <= 1)
			{
				b[j] = 1000;
				pairs++;
				break;
			}
		}
	}
	
	cout << pairs;
}
