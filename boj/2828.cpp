#include <iostream>
#include <vector>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int cnt, m, n,apples,app,forM;
int main(void)
{
	fast_io();
	cin >> n >> m;
	if(m>1)
		forM = m - 1;
	cin >> apples;
	for (int i = 0; i < apples; i++)
	{
		cin >> app;
		if(m-forM<=app && app<=m)
			continue;
		else if(m<app)
		{
			cnt += app - m;
			m += app - m;
		}
		else if(app<m)
		{
			cnt += m - app-forM;
			m -= m - app-forM;
		}
	}
	cout << cnt;
}
