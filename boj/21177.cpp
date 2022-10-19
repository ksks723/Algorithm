#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int n,sum;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    { 
        if( i && (v[i-1]+1 == v[i] ))
            continue;
        else
            sum+=v[i];
    }
    cout << sum;
}
