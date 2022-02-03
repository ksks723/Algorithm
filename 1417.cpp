#include <iostream>
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
    int n, idx, cnt = 0;
    int arr[51] = {
        0,
    };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n <= 1)
    {
        cout << "0";
        return 0;
    }
    while (true)
    {
        int max = 0;
        for (int i = 1; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                idx = i;
            }
        }
        if (arr[0] <= arr[idx])
        {
            --arr[idx];
            ++arr[0];
            ++cnt;
        }
        else
            break;
    }
    cout << cnt;
}