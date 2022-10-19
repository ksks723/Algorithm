#include <bits/stdc++.h>
#include <list>

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
    string str;
    list<char> l;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        l.push_back(str[i]);
    }
    list<char>::iterator iter = l.end();
    int m;
    cin >> m;
    while (m--)
    {
        char order;
        cin >> order; //abcd
        if (order == 'L')
        {
            if (iter != l.begin())
                iter--;
        }
        else if (order == 'D')
        {
            if (iter != l.end())
                iter++;
        }
        else if (order == 'B')
        {
            if (iter != l.begin())
                iter = l.erase(--iter);
        }
        else if (order == 'P')
        {
            char c;
            cin >> c;
            l.insert(iter, c);
        }
    }
    for (char c : l)
    {
        cout << c;
    }
}
