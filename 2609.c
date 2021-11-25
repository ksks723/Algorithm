#include <stdio.h>
#include <string.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main(void)
{
    int a, b;
    int temp;
    scanf("%d %d", &a, &b);
    temp = gcd(a, b);
    printf("%d\n%d", temp, a * b / temp);
}