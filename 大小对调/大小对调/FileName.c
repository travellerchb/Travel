#include<stdio.h>
int main()
{
	int a[5], i, b, j;
	int max, min;
	for (i = 0;i < 5;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			if (a[i] < a[j])
			{
				break;
			}
			if (j == 4 && a[i] >= a[j])
			{
				max = a[i];
				b = i;
			}
		}
	}
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			if (a[i] > a[j])
			{
				break;
			}
			if (j == 4 && a[i] <= a[j])
			{
				min = a[i];
				a[i] = a[b];
				a[b] = min;

			}
		}
	}
	for (i = 0;i < 5;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}