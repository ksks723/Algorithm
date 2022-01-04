#include <iostream>
#include <string.h>
#include <map>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	fast_io();
	map<string, string> m;
	int a, b;
	cin >> a >> b;
	while (a--)
	{
		string c, d;
		cin >> c >> d;
		m.insert(make_pair(c, d));
	}
	while (b--)
	{
		string c;
		cin >> c;
		cout << m.find(c)->second << "\n";
	}
}