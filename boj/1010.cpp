#include <iostream>
#include <string.h>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int arr[31][31] = {0};
int comb(int n, int m)
{
	if (arr[n][m] != 0)
		return arr[n][m];
	else if (n == m)
		return 1;
	else if (n == 1)
		return m;
	else
		return arr[n][m] = comb(n - 1, m - 1) + comb(n, m - 1);
}
int main(void)
{
	fast_io();
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		cout << comb(n, m) << "\n";
	}
}
