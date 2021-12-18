#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t-- != 0)
    {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        if (n % h)
        {
            int a = n / h + 1;
            printf("%d%02d\n", n % h, a);
        }
        else
        {
            int a = n / h;
            printf("%d%02d\n", h, a);
        }
    }
}