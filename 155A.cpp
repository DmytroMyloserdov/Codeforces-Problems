#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int max_a = 0, min_a = 10001, count = 0;
	int f; cin >> f;
	max_a = max(max_a, f);
	min_a = min(min_a, f);
	
	for (int i = 1; i < n; ++i)
	{
		int temp; cin >> temp;
		if (temp > max_a)
		{
			max_a = temp;
			count++;
		}
		if (temp < min_a)
		{
			min_a = temp;
			count++;
		}
	}
	
	cout << count;
}
