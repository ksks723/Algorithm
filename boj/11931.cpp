#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());

    for (int i = 0; i < n;i++)
        cout << v[i] << "\n";
}
