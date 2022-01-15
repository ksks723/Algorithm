#include <bits/stdc++.h>
#include <iostream>

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
    map<string, int> mp;
    int n, max = 0;
    string ans;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (mp.find(str) == mp.end())
            mp[str] = 1;
        else
            mp[str]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > max)
        {
            ans = it->first;
            max = it->second;
        }
    }
    cout << ans;
}