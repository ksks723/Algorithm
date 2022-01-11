#include <iostream>
using namespace std;
int main(void)
{
    int cnt = 0, n, v, arr[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        if (v == arr[i])
            cnt++;
    }
    cout << cnt;
}