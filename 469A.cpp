#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int p; cin >> p;
	set<int> s;
	for (int i = 0; i < p; i++) 
	{
		int temp; cin >> temp;
		s.insert(temp);
	}
	int q; cin >> q;
	for (int i = 0; i < q; i++) 
	{
		int temp; cin >> temp;
		s.insert(temp);
	}
	
	if (s.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}
