#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	string as; cin >> as;
	string bs; cin >> bs;
	int steps = 0;
	for (int i = 0; i < n; ++i)
	{
		int a = (int)as[i] - 48;
		int b = (int)bs[i] - 48;
		steps += min (abs(a - b), 10 - abs(a - b));
	}
	
	cout << steps;
}
