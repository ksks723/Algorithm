#include <iostream>
#include <string.h>
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
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < x)
        {
            cout << a << " ";
        }
    }
}