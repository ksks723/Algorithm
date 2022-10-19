#include <iostream>
#include <algorithm>
#include <queue>

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
    int n, l;
    queue<int> q;
    queue<int> r;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }
    for (int i = 0; i < l; i++)
    {
        int a;
        cin >> a;
        r.push(a);
    }
    while (q.size() > 1)
    {
        for (int i = 0; i < r.front() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
        r.push(r.front());
        r.pop();
    }
    cout << q.front();
}
