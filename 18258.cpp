#include <iostream>
#include <string.h>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int q[2000001] = {};
int main(void)
{
    int n, p = 0, r = 0;
    char str[6];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        cin >> str;

        if (!strcmp(str, "push"))
        {
            cin >> q[r++];
        }
        else if (!strcmp(str, "pop"))
            cout << (p - r ? q[p++] : -1) << "\n";
        else if (!strcmp(str, "size"))
            cout << r - p << "\n";
        else if (!strcmp(str, "empty"))
            printf("%d\n", p == r);
        else if (!strcmp(str, "front"))
            cout << (p - r ? q[p] : -1) << "\n";
        else if (!strcmp(str, "back"))
            cout << (p - r ? q[r - 1] : -1) << "\n";
    }
}