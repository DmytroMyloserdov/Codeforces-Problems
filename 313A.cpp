#include <bits/stdc++.h>
using namespace std;

int main()
{
	string n; cin >> n;
	if (n[0] != '-') cout << n;
	else
	{
		int len = n.length();
		int last = (int)(n[len - 1] - 48);
		int pre_last = (int)(n[len - 2] - 48);
		
		if ((len == 3 && last == 0) || (len == 2))
		{
			cout << 0;
			return 0;
		}
		
		if (last > pre_last)
		{
			for (int i = 0; i < len - 1; ++i)
			{
				cout << n[i];
			}
		}
		else
		{
			for (int i = 0; i < len - 2; i++)
			{
				cout << n[i];
			}
			cout << n[len - 1];
		}
	}
}
