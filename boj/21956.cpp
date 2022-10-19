#include <stdio.h>
#include <stack>
#include <algorithm>

using namespace std;
stack<pair<char, int>> s;
int N, K, i, idx;
char S[200001], B[200001];

int main()
{
    scanf("%d %d %s", &N, &K, S);
    for (i = 0; i < N; i++)
    {
        if (s.empty())
            s.push({S[i], 1});
        else if (S[i] == s.top().first)
        {
            s.top().second++;
            if (s.top().second == K)
                s.pop();
        }
        else
            s.push({S[i], 1});
    }

    while (!s.empty())
    {
        for (i = 1; i <= s.top().second; i++)
            B[++idx] = s.top().first;
        s.pop();
    }
    reverse(B + 1, B + idx + 1);
    for (i = 1; i <= idx; i++)
        printf("%c", B[i]);
}