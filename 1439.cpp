#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(void)
{
    fast_io();
    string s;
    cin >> s;
    int o = 0, z = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == '0')
                z++;
            else
                o++;
        }
    }
    cout << min(o, z);
}
