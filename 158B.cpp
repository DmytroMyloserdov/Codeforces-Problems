#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[5] = {0};
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		a[temp]++;
	}
	
	int answer = a[4];
	a[4] = 0;
	
	int temp = min(a[3], a[1]);
	answer += temp;
	a[3] -= temp;
	a[1] -= temp;
	
	answer += a[3];
	a[3] = 0;
	
	temp = a[2] / 2;
	answer += temp;
	a[2] -= temp * 2;
	
	if (a[2] == 1)
	{
		if (a[1] == 1) 
		{
			a[1]--;
			a[2]--;
			answer++;
		}
		else if(a[1] >= 2)
		{
			a[1] -= 2;
			a[2]--;
			answer++;
		}
		else if (a[1] == 0)
		{
			a[2]--;
			answer++;
		}
	}
	
	answer += a[1] / 4;
	
	if(a[1] % 4 != 0)
	{
		answer++;
	}
	
	cout << answer;
}
