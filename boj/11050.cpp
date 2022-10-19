#include <stdio.h>
#include <iostream>
using namespace std;
int get_value(int a)
{
    int res = 1;
    if (a < 0)
        return 0;
    else if (a > 1)
    {
        res = a * get_value(a - 1);
    }
    return res;
}
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", get_value(n) / (get_value(k) * get_value(n - k)));
}
