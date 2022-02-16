#include <iostream>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fast_io();
    int n,cnt=0,len=1,spot=1;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
        if(i==spot*10)
        {
            spot *= 10;
            len++;
        }
        cnt += len;
    }
        cout << cnt;
}
