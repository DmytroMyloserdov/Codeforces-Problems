#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c; cin >> a >> b >> c;
	int max_o = 0;
	
	max_o = max((a + b + c), max_o);
	max_o = max((a + b * c), max_o);
	max_o = max((a * b + c), max_o);
	max_o = max(((a + b) * c), max_o);
	max_o = max((a * (b + c)), max_o);
	max_o = max((a * b * c), max_o);
	
	cout << max_o;
}
