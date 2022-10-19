#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    unsigned long long max = 0, hol = 0;
    unsigned long long arr[10001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    sort(arr, arr + n);
    if (n % 2 == 1)
    {
        hol = arr[n - 1];
        n--;
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
        printf("%lld", max);
    }
    else
    {
        printf("%lld", hol);
    }
}