#include <stdio.h>

int main(void)
{
    int arr[10];
    int asce = 0;
    int desc = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != i + 1)
        {
            asce = 1;
        }
        if (arr[i] != 8 - i)
        {
            desc = 1;
        }
    }

    if (asce == 1)
    {
        printf("ascending");
    }
    else if (desc == 1)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
    return 0;
}