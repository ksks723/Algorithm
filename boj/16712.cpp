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
int v, n, m;
vector<int> vec;
int main(void)
{
    fast_io();
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    for (int i = 0; i < n - m + 1;i++)
    {
        cin >> v;
        sort(vec.begin(), vec.begin()+m);
        vec.erase(vec.begin() + v-1);

    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size();i++)
        cout << vec[i] << " ";
}