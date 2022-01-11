#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int n, arr[100001], x, cnt = 0;
int main(void)
{
    fast_io();
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;
    sort(arr, arr + n);
    int l = 0, r = n;
    while (l < r)
    {
        if (arr[l] + arr[r] == x)
            cnt++, l++, r--;
        else if (arr[l] + arr[r] > x)
            r--;
        else
            l++;
    }
    cout << cnt;
}
