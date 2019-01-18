#include <bits/stdc++.h>
using namespace std;

int main()
{
	string inp; cin >> inp;
	int len = inp.length();
	
	int l_count = 0, u_count = 0;
	for (int i = 0; i < len; i++)
	{
		int temp = (int)inp[i];
		if (temp >= 65 && temp <= 90) u_count++;
		if (temp >= 97 && temp <= 122) l_count++;
	}
	
	int mult = ((u_count > l_count) ? -1 : 1);
	
	for (int i = 0; i < len; i++)
	{
		int temp = (int)inp[i];
		if (mult == 1)
		{
			if (temp >= 65 && temp <= 90) cout << (char)((int)inp[i] + mult * 32);
			else cout << inp[i];
		}
		else
		{
			if (temp >= 97 && temp <= 122) cout << (char)((int)inp[i] + mult * 32);
			else cout << inp[i];
		}
	}
}
