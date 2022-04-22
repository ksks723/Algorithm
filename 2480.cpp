#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i, m = 0, cnt = 0, t, ans, x = 0;
    int a[3], b[7];

    for (i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);

    for (i = 0; i < 7; i++)
        b[i] = 0;

    for (i = 0; i < 3; i++)
        b[a[i]]++;
    
    for (i = 0; i < 7; i++)
    {
        if (b[i] == 3) 
        {
            ans = 10000 + i * 1000;
            x = 1;
            break;
        }
        if (b[i] == 2) 
        {
            ans = 1000 + i * 100;
            x = 1;
            break;
        }  
    }

    if (x == 0) ans = a[2] * 100;
    
    cout << ans <<"\n";
}
