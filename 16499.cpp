#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n;
map<string,int> arr;
int main(void)
{
    fast_io();
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        arr[str] = 1;
    }
    cout << arr.size();
}