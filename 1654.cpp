#include <iostream>
#include <string.h>
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
    int k, n, max = 0, high, low = 0, cm = 0, ckn = 0;
    cin >> k >> n;
    int arr[k + 1], res;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    high = max;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cm = mid;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] / cm)
                ckn += arr[i] / cm;
        }
        if (ckn >= n && ckn > n)
        {
            res = cm;
        }
        if (ckn < n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << res;
}