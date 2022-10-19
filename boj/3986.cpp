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
    int n, res = 0;
    cin >> n;
    while (n--)
    {
        string str;
        stack<char> s;
        cin >> str;
        s.push(str[0]);
        for (int i = 1; i < str.size(); i++)
        {
            if (!s.empty() && str[i] == s.top())
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
        }
        if (s.empty())
            res++;
    }
    cout << res;
}
