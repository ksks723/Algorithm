#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int c[128];
string t, l, r;
int main()
{
    string s;
    cin >> s;
    for (char i : s)
    {
        c[i]++;
    }
    for (char i = 'A'; i < 'Z'; ++i)
    {
        if (c[i] % 2)
            t += i;
        for (int j = 0; j < c[i] / 2; ++j)
            l += i;
    }
    if (t.size() > 1)
        cout << "I'm Sorry Hansoo";
    else
    {
        cout << l;
        cout << t;
        reverse(l.begin(), l.end());
        cout << l;
    }
}