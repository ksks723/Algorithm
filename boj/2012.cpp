#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int arr[500001];
int ck[500001];
int main(void)
{
    fast_io();
    int n, num = 1,the_idx,min_idx;
    cin >>n;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
        ck[arr[i]]=1;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n;i++)
    {
        if(!ck[arr[i]])
            ck[arr[i]]=1;
        else
            the_idx = arr[i];
    }
    for (int i = 0;i<n;i++)
        if(!ck[i])
            min_idx = i;
    cout << min_idx - the_idx;
}
