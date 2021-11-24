#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, c;
    int temp;
    scanf("%d %d", &a, &b);
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    temp = a * b;
    while (c != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("%d\n", a);
    printf("%d", temp / a);
}