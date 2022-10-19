#include <iostream>
#include <stack>
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