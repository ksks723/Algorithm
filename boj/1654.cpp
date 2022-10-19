#include <iostream>
#include <string.h>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int k, n, res = 0;
int max_arr_value = 0;

long long low = 1, high, mid;

int main(void)
{
    fast_io();

    cin >> k >> n;
    int arr[k + 1];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
        if (max_arr_value < arr[i])
            max_arr_value = arr[i];
    }

    high = max_arr_value;

    while (low <= high)
    {

        mid = (low + high) / 2;
        int ckn = 0;
        for (int i = 0; i < k; i++)
        {
            ckn += arr[i] / mid;
        }
        if (ckn >= n)
        {
            low = mid + 1;
            if (res < mid)
                res = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << res;
}