#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		sum += temp;
	}
	
	cout << (double)sum / n;
}
