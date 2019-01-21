#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, r; cin >> k >> r;
	int last = k % 10;
	
	for (int i = 1; i < 10; i++)
	{
		if ((last * i % 10) == r || (last * i % 10) == 0)
		{
			cout << i;
			return 0;
		}
	}
}
