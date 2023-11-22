#include<stdio.h>
int main()
{
	long a[3];
	int i = 0;
	int j = 0;
	long b = 0;
	for (i = 0;i < 3;i++)
	{
		scanf_s("%ld", &a[i]);
	}
	for (j = 0;j < 3;j++)
	{
		for (i = 0;i < 2;i++)
		{
			if (a[i] < a[i + 1])
			{
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
	if (a[1] + a[2] > a[0] && a[0] - a[2] < a[1])
	{
		if (a[0] * a[0] == a[1] * a[1] + a[2] * a[2])
		{
			printf("yes");//
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("not a triangle");
	}
	return 0;
}