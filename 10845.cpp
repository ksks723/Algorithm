#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
queue<int> q;

void front()
{
    if (!q.empty())
    {
        printf("%d", q.front());
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
        printf("%d", q.back());
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
        printf("%d", q.front());
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
    int input;
    scanf("%d", &input);
    char order[5];
    for (int i = 0; i < input; i++)
    {
        scanf("%s", &order);
        if (strcmp(order, "push") == 0)
        {
            int a;
            scanf("%d", &a);
            q.push(a);
        }
        else if (strcmp(order, "pop") == 0)
        {
            pop();
        }
        else if (strcmp(order, "size") == 0)
        {
            q.size();
        }
        else if (strcmp(order, "empty") == 0)
        {
            empty();
        }
        else if (strcmp(order, "front") == 0)
        {
            front();
        }
        else if (strcmp(order, "back") == 0)
        {
            back();
        }
    }
}