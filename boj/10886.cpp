#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n, cute, notCute;
int main(void)
{
    fast_io();
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a)
            cute++;
        else
            notCute++;
    }
    if (cute > notCute)
        cout << "Junhee is cute!";
    else
        cout << "Junhee is not cute!";
}