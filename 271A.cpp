#include <bits/stdc++.h>
using namespace std;

int main()
{
	int y; cin >> y;
	
	y++;
	for ( ; y < 9124; y++)
	{
		int four, three, two, one, temp = y;
		
		four = temp / 1000;
		temp -= four * 1000;
		
		three = temp / 100;
		temp -= three * 100;
		
		two = temp / 10;
		temp -= two * 10;
		
		one = temp;
		
		set<int> s;
		
		s.insert(four);
		s.insert(three);
		s.insert(two);
		s.insert(one);
		
		if (s.size() == 4)
		{
			cout << four << three << two << one;
			return 0;
		}
		
		s.clear();
	}
}
