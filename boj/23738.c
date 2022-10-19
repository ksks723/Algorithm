#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    scanf("%s", &word);
    int n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        if (word[i] == 'B')
        {
            printf("v");
        }
        else if (word[i] == 'E')
        {
            printf("ye");
        }
        else if (word[i] == 'H')
        {
            printf("n");
        }
        else if (word[i] == 'P')
        {
            printf("r");
        }
        else if (word[i] == 'C')
        {
            printf("s");
        }
        else if (word[i] == 'Y')
        {
            printf("u");
        }
        else if (word[i] == 'X')
        {
            printf("h");
        }
        else
        {
            printf("%c", word[i] + 32);
        }
    }
}