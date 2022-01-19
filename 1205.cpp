#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    vector<int> v;
    fast_io();
    int n, score, p, res = 0; // 랭킹목록, 태수점수, 랭킹개수
    cin >> n >> score >> p;
    if (n == 0)
    {
        cout << "1";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    if (v.back() >= score && v.size() == p)
    {
        cout << "-1";
    }

    else
    {
        v.push_back(score);
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == score)
            {
                res = i;
                break;
            }
        }
        cout << res + 1;
    }
}