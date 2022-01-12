#include <iostream>
#include <climits>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(void)
{
    long long overflow = 0, res = 0;
    fast_io();
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        res = 0, overflow = 0;
        for (int j = 0; j < n; j++)
        {
            long long a;
            cin >> a;
            if (res > 0 && a > 0 && a > LLONG_MAX - res)
                overflow++;
            if (res < 0 && a < 0 && a < LONG_MIN - res)
                overflow--;
            res += a;
        }

        if (overflow < 0)
        {
            cout << "-\n";
        }
        else if (overflow > 0)
        {
            cout << "+\n";
        }
        else if (res == 0)
        {
            cout << "0\n";
        }
        else if (res < 0)
        {
            cout << "-\n";
        }
        else if (res > 0)
        {
            cout << "+\n";
        }
    }
}