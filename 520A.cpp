#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	string st; cin >> st;
	set<char> s;
	
	if (n < 26) 
	{
		cout << "NO";
		return 0;
	}
	
	for (int i = 0; i < n; i++)
	{
		s.insert(tolower(st[i]));
	}
	
	if (s.size() != 26) cout << "NO";
	else cout << "YES";
}
