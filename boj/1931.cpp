//1931 회의실배정
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v;
int main()
{
    int n,min=0,cnt=0;
    cin >> n;
    while(n--)
    {    int a,b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(min<= v[i].second)
        {
            cnt++;
            min = v[i].first;
        }
    }
    cout << cnt;
    return 0;
}
