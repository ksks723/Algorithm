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
vector<int> v;
int main(void)
{
    fast_io();
    int a,b,res=0,cnt=1;
    cin >> a >> b;
    for (int i = 1; i <=b;i++)
    {
        for (int j = 1; j <= i;j++)
        {
            if(cnt>=a && b>=cnt)
                res += i;
            cnt++;
        }
    }
    cout << res;
}
