#include <iostream>
using namespace std;

int main()
{

    int n, m, k = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        k += i;
    }
    if (n < k)
        cout << "-1";
    else
    {
        n -= k;
        n %= m;
        if (n)
            cout << m;
        else
            cout << m - 1;
    }
}