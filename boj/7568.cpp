#include <bits/stdc++.h>
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
    vector<pair<int, int>> v;
    int arr[51];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int kg, cm;
        cin >> kg >> cm;
        v.push_back(make_pair(kg, cm));
    }
    for (int i = 0; i < n; i++)
        arr[i] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                arr[i]++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
