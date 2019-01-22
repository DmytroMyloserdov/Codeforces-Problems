#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, counter = 0;
	cin >> n >> k;
	
	
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (5 - temp >= k) counter++;
	}
	
	cout << counter / 3;
}
