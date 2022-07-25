#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
vector<tuple<int, int, int, int>> v;
int n, a, b, c, d,target;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool cmp(tuple<int, int, int, int> &a, tuple<int, int, int, int> &b)
{
    if (get<0>(a) == get<0>(b))
    {
        if (get<1>(a) == get<1>(b))
        {
            if(get<2>(a) == get<2>(b))
                return get<0>(a) == target;
            else
                return get<2>(a) > get<2>(b);
        }
        else
            return get<1>(a) > get<1>(b);
    }
    else
        return get<0>(a) > get<0>(b);
}
int main(void)
{
    fast_io();
    cin >> n>>target;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        v.push_back(make_tuple(b, c, d, a));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<n;i++)
    {
        if(get<3>(v[i]) == target)
        {
            cout << i;
            break;
        }
    }
}