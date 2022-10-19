#include <stdio.h>
#include <string.h>

int main(void)
{
    int testNum;
    int arr[15][15] = {0};
    int k, n;
    for (int i = 0; i < 15; i++)
    {
        arr[0][i] = i + 1;
        arr[i][0] = 1;
    }
    for (int i = 1; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    scanf("%d", &testNum);
    for (int i = 0; i < testNum; i++)
    {
        scanf("%d\n%d", &k, &n);
        printf("%d\n", arr[k][n - 1]);
    }
}