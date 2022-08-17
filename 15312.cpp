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
int alpha[26] = {3,2,1,2,3,3,2,3,3,2,2,1,2,2,1,2,2,2,1,2,1,1,1,2,2,1};
string a,b;
vector<int> v;
int main(void)
{
    fast_io();
    cin >> a >> b;
    for(int i=0;i<a.length();i++)
    {
        v.push_back(alpha[a[i]-65]);
        v.push_back(alpha[b[i]-65]);
    }
    while(v.size()>2)
    {
        vector<int> val;
        for(int i=0;i<v.size()-1;i++)
            val.push_back((v[i]+v[i+1])%10);
        v = val;
    }
    cout << v[0] << v[1];

}