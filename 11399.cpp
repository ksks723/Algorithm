#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
vector<int> v;
int main(void)
{
	fast_io();
	int sum = 0, n;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n;i++)
	{
		sum += (v[i] * (n - i));
	}
	cout << sum;
}