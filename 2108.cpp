#include <bits/stdc++.h>
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
    int arr[500001];
    int a = 0;
    int cnt[8001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a += arr[i];
        cnt[arr[i] + 4000]++;
    }
    sort(arr, arr + n);
    int chk, max = 0;
    for (int i = 0; i < 8001; i++)
    {
        if (cnt[i] > max)
        {
            max = cnt[i];
            chk = i;
        }
    }

    for (int i = chk + 1; i < 8001; i++)
    {
        if (cnt[i] == max)
        {
            chk = i;
            break;
        }
    }
    cout << round(double(a) / n) << "\n"
         << arr[(n - 1) / 2] << "\n"
         << chk - 4000 << "\n"
         << arr[n - 1] - arr[0];
}
