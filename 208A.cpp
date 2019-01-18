#include <bits/stdc++.h>
using namespace std;

int main()
{
	string inp; cin >> inp;
	int len = inp.length();
	bool last_space = false;
	bool first_wub = inp[0] == 'W' && inp[1] == 'U' && inp[2] == 'B';
	
	for (int i = 0; i < len; i++)
	{
		if (i < len - 2)
		{
			if (inp[i] == 'W' && inp[i + 1] == 'U' && inp[i + 2] == 'B')
			{
				if (!last_space && !first_wub) 
				{
					cout << ' ';
					last_space = true;
				}
				i += 2;
				continue;
			}
		}
		
		cout << inp[i];
		if (first_wub) first_wub = false;
		if (last_space) last_space = false;
	}
}
