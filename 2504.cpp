#include <iostream>
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
    int res = 0, tmp = 1;
    stack<char> s;
    string str;
    cin >> str;
    bool ck = true;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            s.push(str[i]);
            tmp *= 2;
        }
        else if (str[i] == '[')
        {
            s.push(str[i]);
            tmp *= 3;
        }
        else if (str[i] == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                ck = false;
                break;
            }
            if (str[i - 1] == '(')
                res += tmp;
            s.pop();
            tmp /= 2;
        }
        else
        {
            if (s.empty() || s.top() != '[')
            {
                ck = false;
                break;
            }
            if (str[i - 1] == '[')
                res += tmp;
            s.pop();
            tmp /= 3;
        }
    }
    if (ck || s.empty())
        cout << res;
    else
        cout << "0";
}