#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[101][101]{
        0,
    };
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int k = x1; k <= x2; k++)
        {
            for (int p = y1; p <= y2; p++)
            {
                arr[k][p]++;
            }
        }
    }
    for (int i = 0; i <= 100; i++)
    {
        for (int k = 0; k <= 100; k++)
        {
            if (arr[i][k] > m)
            {
                sum++;
            }
        }
    }
    cout << sum << "\n";

    return 0;
}