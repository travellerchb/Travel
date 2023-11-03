#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int i = 0, count = 0;
	scanf_s("%s", a, 30);
	getchar();
	char b;
	scanf_s("%c", &b);
	int sz = strlen(a);
	for (i = 0;i < sz;i++)
	{
		if (a[i] == b)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}