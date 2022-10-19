#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int t;
vector<string> v;
vector<string> rv;
int main()
{
    fast_io();
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string tmp;
        cin >> tmp;
        v.push_back(tmp);
        reverse(tmp.begin(),tmp.end());
        rv.push_back(tmp);
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
            if(!v[i].compare(rv[j]))
            {
                int len = v[i].length();
                cout << len << " " << v[i][len/2];
                return 0;   
            }
    }        
}       