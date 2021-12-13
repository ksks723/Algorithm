#include <iostream>
#include <stack>
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
    cin >> m;
    int qu[m] = {
        0,
    };
    for (int i = 0; i < m; i++)
    {
        cin >> qu[i];
        int ck = 0;
        for (int j = 0; j < n; j++)
        {
            if (qu[i] == arr[j])
            {
                ck = 1;
            }
        }
        cout << ck << "\n";
    }
}