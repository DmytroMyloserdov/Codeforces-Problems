#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int temp, counter = 0, events = 0;
	
	
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp > 0)
		{
			counter += temp;
		}
		else
		{
			if (counter <= 0)
			{
				events++;
			}
			else
			{
				counter--;
			}
		}
	}	
	cout << events;
}

