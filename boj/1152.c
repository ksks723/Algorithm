#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000000];
    int cnt = 0;
    scanf("%[^\n]s", arr);
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        if (length == 1 && arr[0] != ' ')
            cnt++;
        if (i == 1 && arr[i - 1] != ' ')
        {
            cnt++;
            continue;
        }
        if (i > 0 && arr[i] != ' ' && arr[i - 1] == ' ')
        {
            cnt++;
        }
    }

    printf("%d", cnt);
}