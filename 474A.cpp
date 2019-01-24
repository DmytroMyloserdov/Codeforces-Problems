#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c; cin >> c;
	string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string s; cin >> s;
	int ind = (c == 'R' ? -1 : 1);
	for (int i = 0; i < s.length(); ++i)
	{
		cout << k[k.find_first_of(s[i]) + ind];
	}
}
