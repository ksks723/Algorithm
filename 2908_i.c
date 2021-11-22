#include <stdio.h>
#include <string.h>
int main(void)
{
    int one, two;
    int il, e;

    scanf("%d %d", one, two);

    il = (one % 10 * 100) + (one / 10 % 10 * 10) + (one / 100);
    e = (two % 10 * 100) + (two / 10 % 10 * 10) + (two / 100);

    if (il > e)
    {
        printf("%d", il);
    }
    else
    {
        printf("%d", e);
    }
}