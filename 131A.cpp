#include <bits/stdc++.h>
using namespace std;

int main()
{
	string inp; cin >> inp;
	int len = inp.length();
	int count = 0;
	
	if (tolower(inp[0]) == inp[0]) count++;
	
	for (int i = count; i < len; i++)
	{
		if (toupper(inp[i]) == inp[i]) count++;
	}
	
	if (count == len)
	{
		for (int i = 0; i < len; i++)
		{
			if (toupper(inp[i]) == inp[i]) inp[i] = (char)((int)inp[i] + 32);
			else inp[i] = (char)((int)inp[i] - 32);
		}
	}
	
	cout << inp;
}
