#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, cnt = 0;
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 5 == 0)
        {
            n -= 5;
        }
        else
        {
            n -= 3;
        }
        cnt++;
    }
    if (n < 0 || cnt == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", cnt);
    }
}
