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
    int n, f;
    cin >> n;
    vector<string> v;
    while (n--)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }
    cin >> f;
    if (f == 1)
    {
        for (auto i = 0; i < v.size(); i++)
            cout << v[i] << "\n";
    }
    else if (f == 2)
    {
        for (int i = 0; i < v.size(); i++)
        {
            reverse(v[i].begin(), v[i].end());
            cout << v[i] << "\n";
        }
    }
    else
    {
        reverse(v.begin(), v.end());
        for (auto i = 0; i < v.size(); i++)
            cout << v[i] << "\n";
    }
}