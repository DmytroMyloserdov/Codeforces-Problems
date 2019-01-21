#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a; cin >> a;
	string b; cin >> b;
	
	int len = a.length();
	
	for (int i = 0; i < len; i++)
	{
		if (((int)a[i]) == ((int)b[i])) cout << "0";
		else cout << "1";
	}
}
