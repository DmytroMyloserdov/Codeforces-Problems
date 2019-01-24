#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	string str; cin >> str;
	int ones = 0;
	
	for (int i = 0; i < n; ++i)
	{
		ones += (int)str[i] - 48;
	}
	
	int min_a = min(ones, n - ones);
	
	cout << n - min_a * 2;
}
