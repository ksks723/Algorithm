#include <iostream>
#include <stack>
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
    int n, res = 0, max = 0;
    stack<pair<int, int>> s;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        s.push(make_pair(a, b)); //위치,높이
        if (b > max)
            max = b; //
        res += a * b;
    }
}
