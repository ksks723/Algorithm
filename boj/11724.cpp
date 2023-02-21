#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int a, b, cnt = 0;
bool visited[1001];
vector<int> v[1001];

void dfs(int start)
{
    visited[start] = true;
    for (int j = 0; j < v[start].size(); j++)
        if (!visited[v[start][j]])
            dfs(v[start][j]);
}

int main(void)
{
    fast_io();
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        int n, m;
        cin >> n >> m;
        v[n].push_back(m);
        v[m].push_back(n);
    }
    for (int i = 1; i <= a; i++)
        if (visited[i] == false)
        {
            dfs(i);
            cnt++;
        }
        cout<<cnt;
}
