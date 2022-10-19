#include <iostream>
#include <deque>
#include <string.h>
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
    deque<int> dq;
    int n;
    cin >> n;
    char order[15];
    while (n--)
    {
        int x;
        cin >> order;
        if (!strcmp(order, "push_front"))
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (!strcmp(order, "push_back"))
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (!strcmp(order, "pop_front"))
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (!strcmp(order, "pop_back"))
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (!strcmp(order, "size"))
        {
            cout << dq.size() << "\n";
        }
        else if (!strcmp(order, "empty"))
        {
            cout << dq.empty() << "\n";
        }
        else if (!strcmp(order, "front"))
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.front() << "\n";
            }
        }
        else if (!strcmp(order, "back"))
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.back() << "\n";
            }
        }
    }
}