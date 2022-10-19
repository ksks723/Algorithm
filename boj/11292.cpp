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
bool cmp(pair<double, string> a, pair<double, string> b)
{
    return a.first > b.first;
}
vector<pair<double, string>> v;
int main(void)
{
    fast_io();
    int n;
    while(true)
    {
        cin >> n;
        if(!n)
            break;
        for (int i = 0;i<n;i++)
        {
            double dou;
            string str;
            cin >> str >> dou;
            v.push_back({dou, str});
        }
        stable_sort(v.begin(), v.end(),cmp);
        for (int i = 0; i < n;i++)
            if(v[0].first == v[i].first)
                cout << v[i].second << " ";
        cout << "\n";
        v.clear();
    }
}

