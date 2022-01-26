#include <iostream>
#include <vector>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fast_io();
    int n, a, b, res = 0, idx = 0, last_max = 0;
    vector<int> v(1001, 0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[a] = b; //위치,높이
        if (b > v[idx])
            idx = a; //최고점 기억
    }
    for (int i = 0; i <= idx; ++i)
    {
        last_max = max(last_max, v[i]);
        res += last_max;
    }
    last_max = 0;
    for (int i = 1000; i > idx; --i)
    {
        last_max = max(last_max, v[i]);
        res += last_max;
    }
    cout << res;
}
//참고코드
// #include <stdio.h>
// int a[1003], height, n, area, left;
// main()
// {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int t1, t2;
//         scanf("%d %d", &t1, &t2);
//         a[t1] = t2;
//     }
//     for (int i = 0; i <= 1000; i++)
//     {
//         if (height <= a[i])
//         {
//             area += height * (i - left);
//             left = i;
//             height = a[i];
//         }
//     }
//     area += height;
//     height = left = 0;
//     left = 1000;
//     for (int i = 1000; i >= 0; i--)
//     {
//         if (height < a[i])
//         {
//             area += height * (left - i);
//             left = i;
//             height = a[i];
//         }
//     }
//     printf("%d", area);
// }