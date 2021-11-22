#include <stdio.h>

int main(void)
{
    int arr[11];
    int res = 0;
    int ck;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        ck = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                ck = 1;
            }
        }
        if (ck == 0)
        {
            res++;
        }
    }
    printf("%d", res);
}