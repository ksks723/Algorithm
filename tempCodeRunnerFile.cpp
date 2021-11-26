#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int n, max, hol = 0;
    int arr[10001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    if (n % 2 == 1)
    {
        hol = arr[n - 1];
        n--;
    }
    printf("%d", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (max < arr[i] + arr[n - i - 1])
        {
            max = arr[i] + arr[n - i - 1];
        }
    }
    if (max > hol)
    {
        printf("%d", max);
    }
    else
    {
        printf("%d", hol);
    }
}