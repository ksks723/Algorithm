#include <stdio.h>

int main(void)
{
    int num, max, sum = 0, last = 0;
    int card[100] = {0};
    scanf("%d %d", &num, &max);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &card[i]);
    }
    for (int i = 0; i < num - 2; i++)
    {
        for (int j = i + 1; j < num - 1; j++)
        {
            for (int k = j + 1; k < num; k++)
            {
                sum = card[i] + card[j] + card[k];
                if (card[i] + card[j] + card[k] <= max && last < sum)
                {
                    last = sum;
                }
            }
        }
    }
    printf("%d", last);
}