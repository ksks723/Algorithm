#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
bool is_odd(int a)
{ //해야함
    if (a % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    char num[51] = {
        0,
    };
    int alpha[26] = {
        0,
    };
    scanf("%s", num);
    int len = strlen(num);
    int cnt = 0, alphacnt = 0, al = 0, ckcnt = 0;
    char temp[51] = {
        0,
    };
    char rem = 0;

    for (int i = 0; i < len; i++)
    {
        alpha[num[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
        {
            alphacnt++;
        }
        if (is_odd(alpha[i]))
        {
            cnt++;
            rem = 'A' + i;
            alpha[i]--;
        }
    }
    if (cnt >= 2)
    {
        printf("I'm Sorry Hansoo\n");
        return 0;
    }
    int idx = 0;
    if (cnt == 1)
    {
        temp[len / 2] = rem;
        cnt--;
    }
    while (ckcnt < alphacnt)
    {
        if (alpha[al] != 0)
        {
            for (int j = 0; (j < alpha[al] / 2) && al < 26; j++)
            {
                temp[ckcnt + j + idx] = 'A' + al;
                temp[len - 1 - (ckcnt + j + idx)] = 'A' + al;
                if (ckcnt + 1 < alphacnt && j == (alpha[al] / 2) - 1)
                {
                    idx += j;
                }
            }
            ckcnt++;
        }
        al++;
    }
    printf("%s\n", temp);
}