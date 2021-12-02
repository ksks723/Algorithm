#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool is_odd(int a)
{
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
    bool ck = true;
    char num[51];
    int alpha[26] = {0};
    scanf("%s", &num);
    int len = strlen(num);
    int cnt = 0;
    char temp[51] = {0};
    int rem;
    for (int i = 0; i < len; i++)
    {
        alpha[num[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (is_odd(alpha[i]))
        {
            cnt++;
            rem = i;
        }
    }
    if (cnt >= 2)
    {
        printf("I'm Sorry Hansoo\n");
    }
    //1 0 일때 구분
    if (cnt == 1)
    {
        ck = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!is_odd(alpha[i]))
        {
            for (int j = 0; j < alpha[i] / 2; j++)
            {
                temp[j] = 'A' + i;
                temp[len - 1 - j] = 'A' + i;
            }
        }
        else
        {
            temp[len / 2] = alpha[i] + 'A';
        }
    }
    printf("%s\n", temp);
}