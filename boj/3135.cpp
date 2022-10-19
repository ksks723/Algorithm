#include <iostream>
#include <stdlib.h>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int from,to,n,gap,idx=100;
int arr[7];
int main(void)
{
	fast_io();
	cin >> from >> to >> n;
	for (int i = 0;i<n;i++)
		cin >> arr[i];
	gap = abs(to - from);
	for (int i = 0; i < n;i++)
	{
		int tmp = abs(arr[i] - to);
		if (gap > tmp)
		{
			gap = tmp;
			idx = i;
		}
	}
	if(idx!=100)
		cout << abs(arr[idx] - to) + 1;
	else
		cout << abs(to - from);
}
