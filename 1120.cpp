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
    int res = 50;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i <= b.length() - a.length(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < a.length(); j++)
            if (a[j] != b[j + i])
                cnt++;
        if (cnt < res)
            res = cnt;
    }
    cout << res;
}