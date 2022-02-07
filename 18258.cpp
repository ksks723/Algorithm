#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
queue<int> q;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void front()
{
    if (!q.empty())
    {
        cout << q.front() << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}
void back()
{
    if (!q.empty())
    {
        cout << q.back() << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}
void pop()
{
    if (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }
    else
    {
        cout << "-1\n";
    }
}
void empty()
{
    if (q.empty())
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
}

int main(void)
{
    fast_io();
    int input;
    cin >> input;
    char order[6];
    for (int i = 0; i < input; i++)
    {
        cin >> order;
        if (!strcmp(order, "push"))
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else if (!strcmp(order, "pop"))
        {
            pop();
        }
        else if (!strcmp(order, "size"))
        {
            cout << q.size() << "\n";
        }
        else if (!strcmp(order, "empty"))
        {
            empty();
        }
        else if (!strcmp(order, "front"))
        {
            front();
        }
        else if (!strcmp(order, "back"))
        {
            back();
        }
    }
}