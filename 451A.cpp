#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	
	if (n == 1 || m == 1){
		cout << "Akshat";
		return 0;
	}
	if ((m * n) % 2 != 0) cout << "Akshat";
	else cout << "Malvika";
		
	
}
