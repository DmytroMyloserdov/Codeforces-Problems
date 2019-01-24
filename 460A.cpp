#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int days = 0;
	for (int i = 1; n > 0; i++)
	{
		n--;
		days++;
		if (i % m == 0) n++;
	}
	
	cout << days;
}
