#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{ 
    for (int i = 1;;i++)
    {
        int l, p, v;
        cin >> l >> p >> v;
        if (!l && !p && !v)
            break;

        int res = (v / p) * l + min(v % p,l);
        cout << "Case " << i << ": " << res << "\n";
    }
}