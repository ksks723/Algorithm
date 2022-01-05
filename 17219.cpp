#include <iostream>
#include <string.h>
#include <map>
#include <sstream>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
string c, d;
int main(void)
{
	fast_io();
	map<string, string> m;
	int a, b;
	cin >> a >> b;
	cin.ignore();
	while (a--)
	{
		string all;
		getline(cin, all);
		stringstream ss(all);
		ss >> c >> d;
		m.insert(make_pair(c, d));
	}
	while (b--)
	{
		cin >> c;
		cout << m.find(c)->second << "\n";
	}
}