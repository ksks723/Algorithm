#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(void)
{
    fast_io();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        arr[j]++;
    }
    for (int i = 0; i < 10001; i++)
    {
        while (arr[i]-- != 0)
        {
            cout << i << "\n";
        }
    }
}