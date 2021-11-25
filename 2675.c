#include <stdio.h>
#include <string.h>

void print(void)
{
    int r = 0;
    char str[21];
    scanf("%d %s", &r, &str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main(void)
{
    int test = 0;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        print();
    }
}