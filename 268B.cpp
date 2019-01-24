#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int level = 0, answer = 0;
	while (level < n)
	{
		answer += n - level + level * (n - level) - level;
		level++;
	}
	
	cout << answer;
}
