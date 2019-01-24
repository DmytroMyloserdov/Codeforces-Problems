#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int m = 0, k = 0;
	
	for (int i = 0; i < n; ++i)
	{
		int t_m, t_k; cin >> t_m >> t_k;
		if (t_m > t_k) m++;
		if (t_m < t_k) k++;
	}
	
	if (m > k) cout << "Mishka";
	if (m < k) cout << "Chris";
	if (m == k) cout << "Friendship is magic!^^";
}
