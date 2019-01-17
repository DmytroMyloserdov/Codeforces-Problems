#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str; cin >> str;
	int len = str.length();
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
		{
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
}
