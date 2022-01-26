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
    int n, res = 0;
    stack<pair<int, int>> s;
    cin >> n;
    while (n--)
    {
        bool num;
        cin >> num;
        if (num) //1일때
        {
            int a, b;
            cin >> a >> b; //점수 소요시간
            s.push(make_pair(a, b));
        }
        if (!s.empty())
        {
            s.top().second--;
            if (s.top().second == 0)
            {
                res += s.top().first;
                s.pop();
            }
        }
    }
    cout << res;
}
