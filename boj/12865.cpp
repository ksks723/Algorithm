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
vector<int> v;
int main(void)
{
    fast_io();
    int n, l, res = 1;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int ll = l;
    for (int i = 1; i < n; i++)
    {
        ll = ll - (v[i] - v[i - 1]);
        if (ll < 1)
        {
            res++;
            ll = l;
        }
    }
    cout << res;
}