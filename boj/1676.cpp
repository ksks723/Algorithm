#include <iostream>

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
    int a;
    int res = 0;
    cin >> a;
    res = a / 5 + a / 25 + a / 125;
    cout << res;
}