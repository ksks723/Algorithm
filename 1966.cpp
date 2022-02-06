#include <iostream>
#include <queue>
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
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        int cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> p;

        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;

            q.push({i, tmp});
            p.push(tmp);
        }

        while (!q.empty())
        {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if (p.top() == val)
            {
                p.pop();
                cnt++;

                if (idx == m)
                {
                    cout << cnt << "\n";
                    break;
                }
            }
            else
                q.push({idx, val});
        }
    }
}
