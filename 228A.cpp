#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<long long> s;
	for (int i = 0; i < 4; i++)
	{
		long long temp; cin >> temp;
		s.insert(temp);
	}
	
	cout << 4 - s.size();
}
