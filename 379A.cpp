#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	int time = 0;
	int dead = 0;
	
	for (int i = 0; a > 0; )
	{
		a--;
		time++;
		i++;
		if (i == b) 
		{
			i = 0;
			a++;
		}
	}
	cout << time;
}
