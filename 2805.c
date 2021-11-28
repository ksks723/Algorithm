#include <stdio.h>
#include <string.h>
int tree[1000001];
int main(void)
{
    int n, m, max = 0, left = 0, right, res = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tree[i]);
        if (max < tree[i])
        {
            max = tree[i];
        }
    }

    left = 0;
    right = max;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        for (int i = 0; i < n; i++)
        {
            if (tree[i] > mid)
            {
                res += tree[i] - mid;
            }
        }
        if (res == m)
        {
            res = mid;
            left += 1;
        }
        else
        {
            right -= 1;
            res = 0;
        }
    }
    printf("%d", res);
}