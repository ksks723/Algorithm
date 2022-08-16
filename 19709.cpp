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
int n,m;
int main(void)
{
    fast_io();
   cin >> n >> m;
   vector<int> v(m);
   for(int i=0;i<m;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int tmp = 0;
    for(int i=0;i<m;i++)
    {
        if(tmp+v[i]<=n)
            tmp+=v[i];
        else
        {
            cout << i;
            break;
        }
    }   
}