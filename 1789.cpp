#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(void)
{
    fast_io();
    long long n;
    long long ans = 0;
    long long sum = 0;
    cin >> n;
    for (long long i = 1; i < n+1; i++)
    {
        if (sum + i <= n)
        {
            sum += i;
            ans++;
        }
        if (sum + i > n)
        {
            cout << ans << '\n';
            break;
        }
    }
}