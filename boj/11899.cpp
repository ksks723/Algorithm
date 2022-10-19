#include <iostream>
#include <algorithm>
#include <stack>
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
    stack<char> sta;
    stack<char> tac;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(')
            sta.push(s[i]);
        else
        {
            if (!sta.empty())
                sta.pop();
            else
                tac.push(s[i]);
        }
    }
    cout << sta.size() + tac.size();
}
