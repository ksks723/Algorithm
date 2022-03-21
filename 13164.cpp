#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int arr[300001];
queue<int> q;
int main()
{
    fast_io();
    int n, k, res = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int cnt = 0, memnum = 0;
    if (n == k) //1,1 2,2
        memnum = 1;
    else if (k == 1) //2,1 3,1
        memnum = n;
    else
        memnum = (n + 1) / k;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        cnt++;
        if (cnt == memnum || i==n-1)
        {
            cnt = 0;
            res += (q.size() == 1) ? 0 : q.back() - q.front();
            q=queue<int>();
        }
    }
    cout << res;
}