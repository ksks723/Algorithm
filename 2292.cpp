#include <iostream>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fast_io();
    int a, b = 1, i;

    cin >> a;

    for (i = 1; a > b; i++)
    {
        b += 6 * i;
    }
    cout << i;
}