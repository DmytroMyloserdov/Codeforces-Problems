#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	bool color = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char c; cin >> c;
			if (c == 'C' || c == 'Y' || c == 'M') color = true;
		}
	}
	
	cout << (color ? "#Color" : "#Black&White");
}
