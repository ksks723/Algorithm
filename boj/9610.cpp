#include <iostream>
using namespace std;
int main()
{
	int arr[5] = {
		0,
	},
		x, y, t;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		if (x > 0 && y > 0)
			arr[0]++;
		else if (x < 0 && y > 0)
			arr[1]++;
		else if (x < 0 && y < 0)
			arr[2]++;
		else if (x > 0 && y < 0)
			arr[3]++;
		else if (x == 0 || y == 0)
			arr[4]++;
	}
	for (int i = 0; i < 4; i++)
		cout << "Q" << i + 1 << ": " << arr[i] << '\n';
	cout << "AXIS: " << arr[4] << '\n';
}
