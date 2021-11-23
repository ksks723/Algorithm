#include <stdio.h>
#include <string.h>

int main(void)
{
    int cnt, res;
    int a, b;
    scanf("%d", &cnt);

    for (int i = 0; i < cnt; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}