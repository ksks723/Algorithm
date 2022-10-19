#include <stdio.h>

unsigned long long tree[1000001];
int main(void)
{
    int n, m;
    long long max = 0, left, right, res = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &tree[i]);
        if (max < tree[i])
        {
            max = tree[i];
        }
    }

    left = 0;
    right = max;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            if (tree[i] > mid)
            {
                total += tree[i] - mid;
            }
        }
        if (total >= m && mid > res)
        {
            res = mid;
        }
        if (res < mid)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    printf("%lld", res);
}