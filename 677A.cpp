#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, h; cin >> n >> h;
	vector<int> a;
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		a.push_back(temp);
	}
	
	int answer = n;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] > h) answer++;
	}
	
	cout << answer;
}
