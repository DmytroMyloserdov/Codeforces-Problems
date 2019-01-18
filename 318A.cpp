#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k; cin >> n >> k;
	long long evens = n / 2;
	long long not_evens = n - evens;
	
	long long answer = 1;
	if (k > not_evens)
	{
		k -= not_evens;
		answer = 2;
	}
	
	for (int i = 1; i < k; i++) answer += 2;
	
	cout << answer;
}
