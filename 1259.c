#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{

    while (true)
    {
        bool ck = true;
        char num[10];
        scanf("%s", &num);
        if (num[0] == '0')
        {
            break;
        }
        int len = strlen(num);
        for (int i = 0; i < len / 2; i++)
        {
            if (num[i] != num[len - 1 - i])
            {
                ck = false; //
            }
        }
        if (ck)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}