#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int i = 0, sum = 0;
	
	while (sum < n)
	{
		sum += i + 1;
		i++;
		n -= sum;
	}
	if(n < 0)
		cout << i - 1;
	else
		cout << i;
}
