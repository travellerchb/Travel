#include<stdio.h>
int main()
{
	int a[100][100];
	int i, j, k, l;
	int b, c, z = 0, sum = 0;
	double s = 0;
	scanf_s("%d%d%d", &i, &j, &k);
	for (b = 0;b < i;b++)
	{
		for (c = 0;c < j;c++)
		{
			scanf_s("%d", &a[b][c]);
		}
	}
	for (b = 0;b < i;b++)
	{
		s += a[b][k - 1];
	}
	for (b = 0;b < i;b++)
	{
		for (c = 0;c < j;c++)
		{
			z += a[b][c];
		}
		if (z > sum)
		{
			sum = z;
		}
		z = 0;
	}
	s = s / i;
	printf("%lf %d", s, sum);
	return 0;
}