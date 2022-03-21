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
int Diff[300001];
int main()
{
    fast_io();
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int total = arr[n - 1] - arr[0];

    for (int i = 1; i < n; i++)
        Diff[i - 1] = arr[i] - arr[i - 1];

   
    sort(Diff, Diff + n - 1, greater<>());

    for (int i = 0; i < k - 1; i++)
        total -= Diff[i];

    cout << total;
}