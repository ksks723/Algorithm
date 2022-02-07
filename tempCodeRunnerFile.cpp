#include <cstdio>

int main()
{
    int n, p = 0, r = 0;
    int q[10000] = {};
    char s[6];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        int x;

        scanf(" %s", s);

        if (s[1] == 'u')
        {
            scanf("%d", &x);
            q[r++] = x;
        }
        else if (s[1] == 'o')
            printf("%d\n", p - r ? q[p++] : -1);
        else if (s[1] == 'i')
            printf("%d\n", r - p);
        else if (s[1] == 'm')
            printf("%d\n", p == r);
        else if (s[1] == 'r')
            printf("%d\n", p - r ? q[p] : -1);
        else if (s[1] == 'a')
            printf("%d\n", p - r ? q[r - 1] : -1);
    }

    return 0;
}