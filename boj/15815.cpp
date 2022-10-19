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
    string str;
    stack<int> s;
    cin >> str;
    int i = 0, res = 0;
    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
            s.push(str[i] - 48);
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            if (str[i] == '+')
                s.push(a + b);
            else if (str[i] == '*')
                s.push(a * b);
            else if (str[i] == '-')
                s.push(a - b);
            else if (str[i] == '/')
                s.push(a / b);
        }
        i++;
    }
    cout << s.top();
}
