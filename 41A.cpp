#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b; cin >> a >> b;
	int a_len = a.length();
	int b_len = b.length();
	
	if (a_len != b_len)
	{
		cout << "NO";
		return 0;
	}
	
	b_len--;
	for (int i = 0; i < a_len; i++)
	{
		int j = b_len - i;
		
		if (a[i] != b[j])
		{
			cout << "NO";
			return 0;
		}
	}
	
	cout << "YES";
}
