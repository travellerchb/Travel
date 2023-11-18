#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int b = 0;
	int c = 99;
	int* max = NULL;
	int* min = NULL;
	for (i = 0;i < 10;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0;i < 10;i++)
	{
		if (b < a[i])
		{
			max = &a[i];
			b = a[i];
		}
		if (c > a[i])
		{
			min = &a[i];
			c = a[i];
		}
	}
	int t = 0;
	t = a[0];
	a[0] = *min;
	*min = t;
	t = a[9];
	a[9] = *max;
	*max = t;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}