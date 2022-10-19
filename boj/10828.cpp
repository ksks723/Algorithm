#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main()
{
    int order;
    stack<int> s;
    cin >> order;
    while (order-- != 0)
    {
        char str[6];
        cin >> str;
        if (!strcmp(str, "push"))
        {
            int a;
            cin >> a;
            s.push(a);
        }
        else if (!strcmp(str, "top"))
        {
            if (s.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << s.top() << "\n";
            }
        }
        else if (!strcmp(str, "size"))
        {
            cout << s.size() << "\n";
        }
        else if (!strcmp(str, "empty"))
        {
            cout << s.empty() << "\n";
        }
        else if (!strcmp(str, "pop"))
        {
            if (s.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
    }
}