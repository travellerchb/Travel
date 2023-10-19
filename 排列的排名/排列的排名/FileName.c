#include <stdio.h>
int kan(int l, int i, int k)
{
	int t, m = 1, n, sum = 0;
	for (t = 1;t <= i - k;t++)
		m *= t;
	n = l * m;
	sum += n;

	return sum;
}


int main()
{
	int i, j, k = 0, sum, SUM = 1, a[10], b, l = 0;
	scanf_s("%d", &i);
	while (scanf_s("%d", &j) != EOF)
	{
		a[k] = j;
		k++;
		if (k == i)
			break;
	}
	for (k = 0;k < i; k++)
	{
		if (k == i - 1)
			break;
		for (l = 0, b = 1;b + k < i; b++)
		{
			if (a[k] > a[k + b])
			{
				l++;
			}
		}
		sum = kan(l, i, k + 1);
		SUM += sum;
	}

	printf("%d", SUM);
	return 0;
}