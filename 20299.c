#include <stdio.h>
#include <string.h>
int arr[500001][3];
int main(void)
{
    int N, K, L;
    int sum = 0, count = 0;
    scanf("%d %d %d", &N, &K, &L);
    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        if (sum >= K && a >= L && b >= L && c >= L)
        {
            arr[count][0] = a;
            arr[count][1] = b;
            arr[count][2] = c;
            count++;
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d %d %d ", arr[i][0], arr[i][1], arr[i][2]);
    }
}