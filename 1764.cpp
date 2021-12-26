#include <iostream>
#include <vector>
#include <string.h>
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
    vector<string> ear;
    vector<string> res;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        ear.push_back(str);
    }
    sort(ear.begin(), ear.end());

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if (binary_search(ear.begin(), ear.end(), str))
        {
            res.push_back(str);
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << "\n";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << "\n";
    }
}