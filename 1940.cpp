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
int n, m,res;
vector<int> arr;
int main(void)
{
    fast_io();
    cin >> n >> m;
    arr.resize(n);
    int l = 0, r = n - 1;
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    while (l<r)
    {
        if(arr[l]+arr[r] == m)
            res++,l++, r--;
        else if (arr[l] + arr[r] > m)
            r--;
        else if (arr[l] + arr[r] < m)
            l++;
    }
    cout << res;
}