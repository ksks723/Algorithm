#include <stdio.h>

int main(void)
{
    int N;
    int min = 1000001;
    int max = -1000001;
    int input = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input);

        if (input < min)
        {
            min = input;
        }
        if (input > max)
        {
            max = input;
        }
    }
    printf("%d %d", min, max);
    return 0;
}