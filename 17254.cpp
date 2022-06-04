#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
int n, m, a, b;
char c;
vector<tuple<int, int, char>> v;
bool cmp(tuple<int, int, char> a, tuple<int, int, char> b)
{
    if (get<1>(a) == get<1>(b))
         return get<0>(a) < get<0>(b);
    else
        return get<1>(a) < get<1>(b);
}
int main()
{
    cin>> n >> m;
    for (int i = 0; i < m;i++)
    {
        cin >> a >> b >> c;
        v.push_back(make_tuple(a, b, c));
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < m;i++)
        cout << get<2>(v[i]);
}
