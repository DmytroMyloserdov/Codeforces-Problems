#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	if (k > 235) 
	{
		cout << 0;
		return 0;
	}
	
	int time = 240 - k;
	int i;
	for (i = 0; time >= 0 && i < n; ++i)
	{
		time -= (i + 1) * 5;
	}
	
	if (time < 0) i--;
	
	cout << i;
}
