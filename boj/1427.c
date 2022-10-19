#include <stdio.h>
#include <string.h>

int main(void)
{
    char N[1000000];
    scanf("%s", &N);
    int length = strlen(N);
    char temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (N[i] < N[j])
            {
                temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%c", N[i]);
    }
}