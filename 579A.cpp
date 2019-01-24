#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x; cin >> x;
	long long temp = 1;
	int ans = 1;
	int i;
	for (i = 0; temp * 2 <= x; temp *= 2, i++) ;
	
	if (temp != x) ans += x - temp;
	if (ans == temp) ans = i + 1;
	
	cout << ans;
}
