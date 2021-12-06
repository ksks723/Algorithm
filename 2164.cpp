#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
    queue<int> q;
    int input;

    cin >> input;
    for (int i = 0; i < input; i++)
    {
        q.push(i + 1);
    }

    while (input != 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
        input--;
    }
    cout << q.front();
}