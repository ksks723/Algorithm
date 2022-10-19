#include <stdio.h>

int main(void)
{
    while (1)
    {
        int a, b, c;
        int s, u, m;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        s = a * a + b * b;
        u = b * b + c * c;
        m = c * c + a * a;
        if (s == c * c || u == a * a || m == b * b)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
}