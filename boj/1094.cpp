#include <iostream>
#include <algorithm>
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
    int stick = 64, x, cnt = 0;
    cin >> x;
    while (x != 0)
    {
        if (stick > x)
            stick /= 2;
        else
        {
            cnt++;
            x -= stick;
        }
    }
    cout << cnt;
}
