#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct id
    {
        char c[17];
        int a;
        int b;
    }stu[1001];
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%s%d%d", stu[i].c, &stu[i].a, &stu[i].b);
    }
    int m = 0;
    scanf("%d", &m);
    int s[1001];
    for (i = 0;i < m;i++)
    {
        scanf("%d", &s[i]);
    }
    int j = 0;
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            if (stu[j].a == s[i])
            {
                break;
            }
        }
        if (j != n)
        {
            printf("%s %d\n", stu[j].c, stu[j].b);
        }
    }
    return 0;
}