#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000000];
    int alpha[26] = {0};
    int ck = 0;
    int max = 0;
    int res = 0;
    scanf("%s", &str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (('A' <= str[i]) && (str[i] <= 'Z'))
        {
            alpha[str[i] - 'A']++;
            ck = 1;
        }
        else if (('a' <= str[i]) && (str[i] <= 'z') && ck == 0)
        {
            alpha[str[i] - 'a']++;
        }
        ck = 0;
    }
    max = alpha[0];
    for (int i = 0; i < 26; i++)
    {
        if (max < alpha[i])
        {
            max = alpha[i];
            ck = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == alpha[i])
        {
            res++;
        }
    }
    if (res > 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", ck + 'A');
    }
}