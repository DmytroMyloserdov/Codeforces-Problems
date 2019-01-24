#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[4] = {};
	int sh[4][n];
	
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		a[temp]++;	
		sh[temp][a[temp]] = i + 1;
	}	
	
	int min1 = min(min(a[1], a[2]), a[3]); 
	cout << min1 << endl;
	
	for (int i = 1; i <= min1; i++)
	{
		cout << sh[1][i] << " " << sh[2][i] << " " << sh[3][i] << endl;
	}
}
