#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int arr[1001], dp[1001], a;
int main()
{
    fast_io();
    cin >> a;
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    for (int i = 0; i < a; i++)
    {
        dp[i] = arr[i];
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + arr[i]);
    }

    cout << *max_element(dp, dp + a);
}
