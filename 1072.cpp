#include <iostream>
using namespace std;
int main(void)
{
    long long x, y, z;
    cin >> x >> y;
    z = 100 * y / x;
    if (z >= 99)
        cout << -1 << "\n";
    else
    {
        int l = 0, r = 1000000000, mid, tmp;
        while (l <= r)
        {
            mid = (l + r) / 2;
            tmp = (y + mid) * 100 / (x + mid);
            if (z < tmp)
                r = mid - 1;
            else
                l = mid + 1;
        }
        cout << l;
    }
}