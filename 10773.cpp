#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    stack<int> s;
    int k, sum = 0;

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            s.pop();
        }
        else
        {
            s.push(n);
        }
    }

    while (!s.empty())
    {

        sum += s.top();
        s.pop();
    }
    cout << sum;
}