#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	int min_n = min(a, b);
	a -= min_n; b -= min_n;
	
	int less = 0;
	if (a > 1) less += a / 2;
	if (b > 1) less += b / 2;
	
	cout << min_n << ' ' << less;
}
