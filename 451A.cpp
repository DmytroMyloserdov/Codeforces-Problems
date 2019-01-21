#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int n1 = n, m1 = m, who = 0;
	
	while (n1 * m1 > 0)
	{
		who++;
		n1--;
		m1--;
	}
		
	if (who % 2 == 0)
		cout << "Malvika";
	else
		cout << "Akshat";	
	
	
}
