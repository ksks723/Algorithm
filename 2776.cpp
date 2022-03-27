#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001];
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int bn(int s, int len)
{
    int l = 0, r = len - 1, m;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (arr[m] < s)
            l = m + 1;
        else if (arr[m] > s)
            r = m - 1;
        else
            return 1;
    }
    return 0;
}
int main(void)
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1;
        for (int i = 0; i < n1; i++)
            cin >> arr[i];
        cin >> n2;
        sort(arr, arr + n1);
        for (int i = 0; i < n2; i++)
        {
            int a;
            cin >> a;
            cout << bn(a, n1) << "\n";
        }
    }
}