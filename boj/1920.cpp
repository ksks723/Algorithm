#include <iostream>
#include <algorithm>
using namespace std;
void getResult(int n, int input, int *arr)
{
    int low = 0, high = n, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == input)
        {
            cout << "1\n";
            return;
        }
        else if (arr[mid] > input)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "0\n";
}
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
        int input;
        cin >> input;
        getResult(n, input, arr);
    }
}