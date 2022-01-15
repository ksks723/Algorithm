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
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
}