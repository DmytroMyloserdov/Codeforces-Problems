#include <bits/stdc++.h>
using namespace std;

int main()
{
	string f; cin >> f;
	map<char, int> ma;
	
	for (int i = 65; i <= 90; i++)
	{
		ma.insert(pair<char, int> ((char)i, 0));
	}
	
	int len = f.length();
	for (int i = 0; i < len; i++)
	{
		ma[f[i]]++;
	}
	
	cin >> f;
	len = f.length();
	for (int i = 0; i < len; i++)
	{
		ma[f[i]]++;
	}
	
	cin >> f;
	len = f.length();
	for (int i = 0; i < len; i++)
	{
		ma[f[i]]--;
	}
	
	bool flag = false;
	for (map<char, int>::iterator it = ma.begin(); it != ma.end(); ++it)
	{
		if (it->second != 0)
		{
			flag = true;
			break;
		}
	}
	
	if (!flag) cout << "YES";
	else cout << "NO";
}
