#include <iostream>
#include <algorithm>
#include <queue>

#define INF 987654321

using namespace std;

int trucks[1001];

int main()
{
    int n, w, l;
    cin >> n >> w >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> trucks[i];
    }
    queue<int> q;
    int time = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            if (q.size() == w)
            {
                total -= q.front();
                q.pop();
            }
            if (total + trucks[i] <= l)
                break;
            q.push(0);
            time++;
        }
        q.push(trucks[i]);
        total += trucks[i];
        time++;
    }
    cout << time + w << "\n";
    return 0;
}