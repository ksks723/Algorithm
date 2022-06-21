#include <iostream>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int money;
int main(void)
{
	fast_io();
	int t;
	cin >> t;
	while(t--)
	{
		cin >> money;
		int a = money/25;
		money -= (a) ? 25 * a : 0;
		int b = money/10;
		money -= (b) ? 10 * b : 0;
		int c = money/5;
		money -= (c) ? 5 * c : 0;
		int d = money/1;
		money -= (d) ? 1 * d : 0;

		cout << a << " " << b << " " << c << " " << d << "\n";
	}
}
