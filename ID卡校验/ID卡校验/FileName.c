#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char a[19] = "";
    int b = 0;
    int num = 0;
    int i = 0;
    int s = 0;
    int t[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
    int z[11] = { 1,0,10,9,8,7,6,5,4,3,2 };
    scanf("%d", &n);
    int j = 0;
    while (1)
    {
        num = 0;
        int flag = 0;
        if (j == n)
        {
            break;
        }
        scanf("%s", a);
        for (i = 0;i < 17;i++)
        {
            if ((int)a[i] >= 65 && (int)a[i] <= 122)
            {
                flag = 1;
            }
            else
            {
                num += ((int)a[i] - 48) * t[i];
            }
        }
        if (flag == 1)
        {
            printf("%s", a);
            printf("error\n");
            j++;
            continue;
        }
        if (z[num % 11] == (int)a[17] - 48)
        {
            s++;
            if (s == n)
            {
                printf("All passed");
            }
        }
        else
        {
            if (z[num % 11] == 10)
            {
                for (i = 0;i < 17;i++)
                {
                    printf("%c", a[i]);
                }
                printf("X");
            }
            else
            {
                for (i = 0;i < 17;i++)
                {
                    printf("%c", a[i]);
                }
                printf("%d", z[num % 11]);
            }
            printf("\n");
        }
        j++;
    }
    return 0;
}