#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int arr[10001];

int main()
{
    int n,k,res=0;
    cin >> n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    arr[i]=v[i+1]-v[i];
    sort(arr,arr+n-1);
    for(int i=0;i<n-k;i++)
    res+=arr[i];
    
    cout << res;
    return 0;
}
