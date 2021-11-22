#include <stdio.h>

int main(void)
{
    //선언..?
    int arr[11];
    int res = 0;
    int ck;
    //포문돌리기
    for (int i = 0; i < 10; i++)
    {
        //10개 입력받기
        scanf("%d", &arr[i]);
        //몫으로 다시 넣어주기
        arr[i] = arr[i] % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        ck = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                ck = 1;
            }
        }
        if (ck == 0)
        {
            res++;
        }
    }
    printf("%d", res);
}