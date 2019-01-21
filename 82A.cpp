#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n; cin >> n;
	
	long long borders[5] = {};
	
	string names[5] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	
	int sum = 0;
	for (int i = 1; sum < n; i *= 2)
	{
		borders[0] = sum + i;
		borders[1] = sum + 2*i;
		borders[2] = sum + 3*i;
		borders[3] = sum + 4*i;
		borders[4] = sum + 5*i;
		sum += i * 5;
	}
	
	
	for (int i = 0; i < 5; i++) 
	{
		if (n <= borders[i])
		{
			cout << names[i];
			return 0;
		}
	}
}
