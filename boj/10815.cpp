#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> a;
vector<int> b;
void binarySearch(vector<int> &arr, int idx, int start, int end)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == b[idx])
        {
            b[idx] = 1;
            return;
        }
        else if (arr[mid] > b[idx])
            end = mid - 1;
        else
            start = mid + 1;
    }
    b[idx] = 0;
    return;
}

int main(void)
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        binarySearch(a, i, 0, n - 1);
    }
    for (int i = 0; i < m; i++)
        cout << b[i] << " ";
}