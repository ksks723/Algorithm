#include <iostream>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int money,c[]={25,10,5,1};
int main(void)
{
	fast_io();
	int t;
	cin >> t;
	while(t--)
	{
		cin >> money;
		int a=0;
		for (int i = 0; i < 4;i++)
		{	
			int a = money/c[i];
			money -= (a) ? c[i] * a : 0;
			cout << a << " ";
		}
		cout << "\n";
	}
}
