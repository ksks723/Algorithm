#include <iostream>
#include <queue>
#include <vector>
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
    queue<pair<int, int>> q;
    int n, total = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        total += t;
        q.push(make_pair(t, i));
    }
    for (int i = 1; i < total + 1; i++)
    {
        if (q.front().first > 1)
        {
            q.push(make_pair(q.front().first - 1, q.front().second));
        }
        else
        {
            v[q.front().second] = i;
        }
        q.pop();
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
