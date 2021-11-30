#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, v;
    int day = 0, dalpaeng = 0;
    scanf("%d %d %d", &a, &b, &v);

    int temp = v - a;
    if (temp % (a - b) == 0)
    {
        day = temp / (a - b) + 1;
    }
    else
    {
        day = temp / (a - b) + 2;
    }
    printf("%d\n", day);
}