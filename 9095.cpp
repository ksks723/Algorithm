#include <iostream>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
    int n,t,arr[12];

int main(void)
{
    fast_io();
    cin >> t;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for (int i = 4; i < 12;i++)
        arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
    while(t--)
    {
        cin >> n;
        cout << arr[n] << "\n";
    }
}