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
int main()
{
    fast_io();
    int n = 0, tmp = 0;
    cin >> n;
    vector<int> v;
    vector<int> vc;

    for (int i = 0; i < n;i++)
    {
        cin >> tmp;
        v.push_back(tmp);
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end());
    vc.erase(unique(vc.begin(), vc.end()), vc.end());
    for (int i = 0; i < v.size();i++)
    {
        cout << lower_bound(vc.begin(), vc.end(), v[i]) - vc.begin() << " ";
    }
    cout << "\n";
}
