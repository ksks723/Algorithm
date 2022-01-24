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
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "CY";
    else
        cout << "SK";
}