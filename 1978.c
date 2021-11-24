#include <stdio.h>

int main(void)
{
    int N, a, cnt = 0;
    int ckPrime[101] = {0};
    int isPrime[1001] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ckPrime[i]);
    }

    for (int i = 2; i < 1001; i++)
    {
        isPrime[i] = i;
    }

    for (int i = 2; i * 2 < 1001; i++)
    {
        if (isPrime[i] == 0)
        {
            continue;
        }
        for (int j = i, k = i; j * k < 1001; k++)
        {
            isPrime[j * k] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (isPrime[ckPrime[i]] != 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}