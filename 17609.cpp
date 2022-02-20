#include <stack>
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
    int n;
    cin >> n;
    while (n--)
    {
    stack<char> s;
    int ck = 1, res = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (!s.empty() && !ck && s.top() != str[i])
            res = 1;
        if (!s.empty() && s.top() == str[i])
        {
            ck = 0;
            s.pop();
        }
        else if (ck)
            s.push(str[i]);
        }
        if ((res && s.empty()) || (!res && s.size()==1))
            cout << "1\n";
        else if (!res && s.empty())
            cout << "0\n";
        else 
            cout << "2\n";
    }
}