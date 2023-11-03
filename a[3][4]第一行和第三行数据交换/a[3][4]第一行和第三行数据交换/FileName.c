#include<stdio.h>
#include<string.h>
int main()
{
	int a[3][4];
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	int b = 0;
	for (i = 0; i < 4; i++)
	{
		b = a[0][i];
		a[0][i] = a[2][i];
		a[2][i] = b;
	}
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}