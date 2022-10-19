#include <iostream>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int arr[1000001];
int main(void)
{
    fast_io();
    int x;
    cin >> x;
    for (int i = 2; i <= x; i++)
    {
        arr[i] = arr[i - 1] + 1;
        if(i%2==0)
            arr[i] = min(arr[i], arr[i / 2] + 1);
        if(i%3==0)
            arr[i] = min(arr[i], arr[i / 3] + 1);
    }
    cout << arr[x];
}