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
int a,b;
int main(void)
{
    fast_io();
    cin >> a >> b;
    int c=a+b;
    vector<int> v(c);
    for(int i=0;i<c;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    for(auto i=0;i<c;i++)
        cout << v[i]<< " ";
}