#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	int even = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0) even++;
	}
	
	int i;
	if (even == 1)
	{
		for (i = 0; i < n && a[i] % 2 != 0; i++) ;
	}
	else
	{
		for (i = 0; i < n && a[i] % 2 == 0; i++) ;
	}
	
	cout << i + 1;
}
