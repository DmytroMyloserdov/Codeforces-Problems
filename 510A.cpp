#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	
	bool right = true;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < m; j++) cout << '#';
		}
		else
		{
			if (right)
			{
				for (int j = 0; j < m - 1; j++) cout << '.';
				cout << '#';
				right = false;
			}
			else
			{
				cout << '#';
				for (int j = 1; j < m; j++) cout << '.';
				right = true;
			}
		}
		cout << endl;
	}
}
