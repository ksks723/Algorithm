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
vector<int> a;
int n,total,ans,dup;
int main(void)
{
    fast_io();
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        total += a[i];
    }
    // 벌 - 꿀 - 벌
    for (int i = 1; i < n; i++)
    {
        dup = a[i];
        ans = max(ans, total - a[0] - a[n - 1] + dup);
    }

    // 벌 - 벌 - 꿀
    dup = a[n - 1];
    for (int i = n - 2; i > 0; i--)
    {
        ans = max(ans, total - a[0] - a[i] + dup);
        dup += a[i];
    }

    // 꿀 - 벌 - 벌
    dup = a[0];
    for (int i = 1; i < n - 1; i++)
    {
        ans = max(ans, total - a[n - 1] - a[i] + dup);
        dup += a[i];
    }

    cout << ans << '\n';

}