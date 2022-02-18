#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int N;
int T[16];
int P[16];
int dp[16];
int main(void)
{
    fast_io();
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> T[i] >> P[i];
    }

    for (int i = N; i >= 1; i--)
    {
        if (i + T[i] - 1 > N)
        {
            dp[i] = dp[i + 1];
            cout <<"                       i : " << i << " dp : " << dp[i] << "\n";
            continue;
        }

        dp[i] = max(dp[i + T[i]] + P[i], dp[i + 1]);//dp5=15, dp4=35, dp3=45,
        cout << "max(dp[" << i << " + " << T[i] << "] + " << P[i] << ", " << dp[i + 1] << "\n";
        cout << "                       i : " << i << " dp : " << dp[i] << "\n";
    }

    cout << dp[1] << '\n';
}