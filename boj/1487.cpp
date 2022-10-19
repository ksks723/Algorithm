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
int main(void)
{
    fast_io();
    long long n, max = 0, idx = 0;
    vector<pair<int, int>> v;
    cin >> n;
    int arr[51];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    cout << "정렬후\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }

    int maxp = 0;
    int tmaxp = 0;
    for (int i = 0; i < n; i++) //0
    {
        int total = 0;
        for (int j = i; j < n; j++) //0 1 2 3 4
        {
            int won = v[i].first - v[j].second;
            if (won > 0)
                total += won;
        }
        if (tmaxp < total)
        {
            tmaxp = total;
            maxp = v[i].first;
        }
    }
    cout << maxp;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i].first - v[i].second)
    //         arr[i] = (v[i].first - v[i].second) * (n - i);
    //     else
    //         arr[i] = 0;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //         idx = i;
    //     }
    // }
    // if (max == 0)
    //     cout << "0";
    // else
    //     cout << v[idx].first;
}
