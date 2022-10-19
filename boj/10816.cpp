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
    int n, m;
    cin >> n;
    int arr[n] = {
        0,
    };
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        cout << upper_bound(arr, arr + n, num) - lower_bound(arr, arr + n, num) << " ";
    }
}