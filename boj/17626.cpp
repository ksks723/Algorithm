#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int dp[50001];
void makeDp(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if (dp[num] == 0)
        {
            dp[num] = dp[i * i] + dp[num - i * i];
        }
        else
        {
            dp[num] = min(dp[num], dp[i * i] + dp[num - i * i]);
        }
    }
}
int main(void)
{
    fast_io();
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
        dp[i * i] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] != 0)
            continue;
        makeDp(i);
    }
    cout << dp[n];
}