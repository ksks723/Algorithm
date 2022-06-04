#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int a, b, n,g,s;
int main(void)
{
	fast_io();
	cin >> a >> b ;
vector<int> garo = {0,b};
vector<int> sero = {0, a};
cin >> n;
for (int i = 0; i < n; i++)
{
	int c, d;
	cin >> c >> d;
	if (c)
		sero.push_back(d); // 23
	else
		garo.push_back(d); // 4
	}
	sort(garo.begin(), garo.end());
	sort(sero.begin(), sero.end());
	for (int i = 1; i < garo.size();i++)
	{
		int tmp = garo[i] - garo[i - 1];
		if(tmp > g)
			g = tmp;
	}
	for (int i = 1; i < sero.size();i++)
	{
		int tmp = sero[i] - sero[i - 1];
		if(tmp > s)
			s = tmp;
	}
	cout << g * s;
}