#include <bits/stdc++.h>
#include <ctype.h>

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
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        list<char> l;
        cin >> str;
        list<char>::iterator iter = l.end();
        for (int i = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]) || isalpha(str[i]))
                l.insert(iter, str[i]);
            else if (str[i] == '<' && iter != l.begin())
                iter--;
            else if (str[i] == '>' && iter != l.end())
                iter++;
            else if (str[i] == '-' && iter != l.begin())
                iter = l.erase(--iter);
        }
        for (char c : l)
            cout << c;
        cout << "\n";
    }
}
