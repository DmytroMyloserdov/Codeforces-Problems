#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int counter = 1;
	string inp; cin >> inp;
	int last = (int)inp[1];
	for (int i = 1; i < n; i++)
	{
		cin >> inp;
		if ((int)inp[0] == last) counter++;
		last = (int)inp[1];
	}
	
	cout << counter;
}
