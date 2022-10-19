#include <iostream>
using namespace std;
int cnt, res,n;
int main()
{
    cin >> n;
    while(n--)
    {
        int num;
        cin >> num;
        if(num)
        {
            cnt++;
            res += cnt;
        }
        else
            cnt = 0;
    }
    cout << res;
}
