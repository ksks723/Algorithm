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
	vector<int> v_a;
	vector<int> v_b;
int main(void)
{
	fast_io();
	int n,sum=0;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		int a;
		cin >> a;
		v_a.push_back(a);
	}
	for (int i = 0; i < n;i++)
	{
		int a;
		cin >> a;
		v_b.push_back(a);
	}
	sort(v_a.begin(), v_a.end());
	sort(v_b.rbegin(), v_b.rend());
	for (int i = 0; i < n;i++)
	{
		sum += (v_a[i] * v_b[i]);
	}
	cout << sum;
}