#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, m, a; cin >> n >> m >> a;
	cout << (long long int)ceil((double)n / a) * (long long int)ceil((double)m / a);
}
