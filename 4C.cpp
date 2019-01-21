#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	map<string, int> m;
	queue<string> q;
	
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		
		map<string, int>::iterator it = m.find(s);
		if(it != m.end())
		{
			string str = it->first;
			stringstream ss; ss << ++it->second;
			str += ss.str();
			q.push(str);
		}
		else 
		{
			m.insert(pair<string, int>(s, 0));
			q.push("OK");
		}
	}
	
	
	
	while(!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}
