#include <iostream>
#include <string.h>
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
	int n, m;
	cin >> n >> m;
	while (n--)
	{
		char grim[51];
		cin >> grim;
		for (int i = 0; i < m; i++)
		{
			if (isalpha(grim[i]))
			{
				grim[m - i - 1] = grim[i];
			}
		}
		cout << grim << "\n";
	}
}