#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n, num, idx = 0;
stack<pair<int, int>> s;
int main(void)
{
    fast_io();
    cin >> n;
    while (n--)
    {
        cin >> num;
        while (!s.empty())
        {
            if (s.top().second > num)
            {
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if (s.empty())
            cout << "0 ";
        s.push(make_pair(++idx, num));
    }
}