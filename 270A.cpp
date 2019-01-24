#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	string ans[t];
	
	for (int i = 0; i < t; i++)
	{
		int temp; cin >> temp;
		int angle = 180 - temp;
		
		if (360 % angle == 0) ans[i] = "YES";
		else ans[i] = "NO";
	}
	
	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}
}
