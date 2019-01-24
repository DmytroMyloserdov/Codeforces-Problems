#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	
	int n = (log((double)b / a) / log (1.5));
	cout << n + 1;
}
