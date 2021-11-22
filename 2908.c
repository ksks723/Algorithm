#include <stdio.h>
#include <string.h>
int main(void)
{
    char one[4];
    char two[4];
    char tmp;

    scanf("%s", &one);
    scanf("%s", &two);
    tmp = one[0];
    one[0] = one[2];
    one[2] = tmp;

    tmp = two[0];
    two[0] = two[2];
    two[2] = tmp;

    if (strcmp(one, two) > 0)
    {
        printf("%s", one);
    }
    else
    {
        printf("%s", two);
    }
}