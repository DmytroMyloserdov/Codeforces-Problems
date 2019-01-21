#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<char> letters;
		
	while (true)
	{
		string temp; cin >> temp;
		int len = temp.length();
		
		for (int i = 0; i < len; i++)
		{
			if (temp[i] >= 'a' && temp[i] <= 'z')
			{
				letters.insert(temp[i]);
			}
		}
		
		if (temp[len - 1] == '}') break;
	}
	
	cout << letters.size();
}
