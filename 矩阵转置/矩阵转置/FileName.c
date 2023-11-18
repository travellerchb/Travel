#include<stdio.h>
void s(int a[][3]);
int main()
{
	int a[3][3] = {0};
	int i = 0;
	int j = 0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	s(a);
}

void s(int a[][3])
{
	int i = 0;
	int j = 0;
	for (j = 0;j < 3;j++)
	{
		for (i = 0;i < 3;i++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}