#include <iostream>
#include <stack>
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
    stack<char> s;
    string str;
    int res = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            s.pop();
            if (str[i - 1] == '(')
                res += s.size();
            else
                res++;
        }
    }
    cout << res;
}
