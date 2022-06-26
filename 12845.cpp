#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int arr[1001], res,n;
int main(void)
{
	fast_io();
	cin >> n;
	for (int i = 0;i<n;i++)
		cin >> arr[i];
	sort(arr, arr + n);
	for (int i = n - 2; i >= 0;i--)
		res += arr[n - 1] + arr[i];
	cout << res;
}
