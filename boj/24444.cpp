#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n, m, r, cnt = 0;
bool visited[1000001];
vector<int> path[100001];
int res[100001];

void bfs(int r)
{
    queue<int> q;
    q.push(r);
    visited[r] = true;
    res[r] = ++cnt;

    while (!q.empty())
    {
        int r = q.front();
        q.pop();

        for (int i : path[r])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
                res[i] = ++cnt;
            }
        }
    }
}

int main(void)
{
    fast_io();
    cin >> n >> m >> r;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        path[a].push_back(b);
        path[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
        sort(path[i].begin(), path[i].end());

    bfs(r);

    for (int i = 1; i <= n; i++)
        cout << res[i] << "\n";
}
