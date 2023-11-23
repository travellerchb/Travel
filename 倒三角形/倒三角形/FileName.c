#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0, j = 0;
	for (i = n;i >= 1;i--)
	{
		for (j = 0;j < n - i;j++)
		{
			printf(" ");
		}
		for (j = 2 * i - 1;j >= 1;j--)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}