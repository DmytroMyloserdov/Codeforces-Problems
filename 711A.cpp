#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<string> ans (n, "");
	bool set = false;
	
	for (int i = 0; i < n; ++i)
	{
		string c; cin >> c;
		int ind = -1;
		int count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (c[j] == 'O') 
			{
				if (count == 0) ind = j;
				count++;
			}
			else count = 0;
			if (count == 2) break;
		}
		if (count == 2 && !set)
		{
			c.replace(ind, 2, "++");
			set = true;
		}
		ans[i] = c;
	}
	
	if (set)
	{
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << ans[i] << endl;
		}
	}
	else
	{
		cout << "NO";
	}
}
