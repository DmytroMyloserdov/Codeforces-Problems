#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		a.push_back(temp);
	}
	
	int max_a = a[0], max_i = 0, min_a = a[0], min_i = 0;
	for (int i = 0; i < n; i++)
	{
		if (max_a < a[i])
		{
			max_a = a[i];
			max_i = i;
		}
		if (min_a >= a[i])
		{
			min_a = a[i];
			min_i = i;
		}
	}
	
	int answer = max_i + n - 1 - min_i;
	if (max_i > min_i) answer--;
	
	cout << answer; 
}
