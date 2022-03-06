#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int main(void)
{
    int n, k,res=0;
    cin >> n >> k;
    for (int i = 0; i < n;i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
        for (int i = n-1; i >= 0; i--)
        {
            if(k/v[i])
            {
                res += k / v[i];
                k = k % v[i];
            }
        }
        cout << res;
}