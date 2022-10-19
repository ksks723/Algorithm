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
int main(void)
{
    fast_io();
    string str;
    cin >> str;
    vector<string> v;
    for (int i = 0; i < str.size();i++)
    {
        v.push_back(str.substr(i, str.size()));
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << "\n";
    }
}

