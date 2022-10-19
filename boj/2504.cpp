#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int tmp = 1;
    int res = 0;
    bool ck = true;
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char input = str[i];
        if (input == '(')
        {
            s.push('(');
            tmp *= 2;
        }
        else if (input == '[')
        {
            s.push('[');
            tmp *= 3;
        }
        else if (input == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                ck = false;
                break;
            }
            else
            {
                if (str[i - 1] == '(')
                    res += tmp;
                s.pop();
                tmp /= 2;
            }
        }
        else
        {
            if (s.empty() || s.top() != '[')
            {
                ck = false;
                break;
            }
            else
            {
                if (str[i - 1] == '[')
                    res += tmp;
                s.pop();
                tmp /= 3;
            }
        }
    }

    if (!ck || !s.empty())
        cout << "0\n";
    else
        cout << res << '\n';

    return 0;
}