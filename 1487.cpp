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
    int n, max = 0, idx = 0;
    vector<pair<int, int>> v;
    cin >> n;
    int arr[51];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first - v[i].second)
            arr[i] = (v[i].first - v[i].second) * (n - i);
        else
            arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }
    if (max == 0)
        cout << "0";
    else
        cout << v[idx].first;
}
