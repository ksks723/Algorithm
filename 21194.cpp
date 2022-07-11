
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n,k,res;
int arr[100001];
int main(void)
{
    fast_io();
    cin >> n>>k;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for(int i=n-1;i>n-k-1;i--)
        res+=arr[i];
    cout << res;
}