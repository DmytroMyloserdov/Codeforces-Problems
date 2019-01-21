#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1, x2, x3; cin >> x1 >> x2 >> x3;
	int min_x = min(x1, x2); min_x = min(min_x, x3);
	int max_x = max(x1, x2); max_x = max(max_x, x3);
	
	cout << max_x - min_x;
}
