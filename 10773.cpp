#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    stack<int> s;
    int k, sum = 0;

    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int n;
        scanf("%d", &n);
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
    printf("%d", sum);
}