
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
vector<int> v;
int n,q;
int main(void)
{
    fast_io();
    cin >> n>> q;
    v.resize(n+1);
    for(int i=1;i<n+1;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<n+1;i++)
        v[i]+=v[i-1];
    while(q--)
    {
        int a,b;
        cin >> a >> b;
        cout << v[b]- v[a-1] << "\n";
    }
}