#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i, j;
	for (i = 1;i <= n;i++)
	{
		int k = 1;
		for (j = 1;j <= n;j++)
		{
			printf("%d ", k);
			if (k < i)
			{
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}