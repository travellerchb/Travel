#include<stdio.h>
int main()
{
	int t = 0;
	scanf_s("%d", &t);
	long long n = 0;
	int i = 0;
	long long j = 0;
	long long k = 0,l = 0;
	while (i < t)
	{
		i++;
		long long b[10] = { 0 };
		scanf_s("%lld", &n);
		for (j = 1;j <= n;j++)
		{
			if (j >= 0 && j <= 9)
			{
				b[j] += 1;
			}
			else if (j > 9)
			{
				k = j;
				while (k > 9)
				{
					l = k % 10;
					k = k / 10;
					b[l] += 1;
				}
				l = k;
				b[l] += 1;
			}
		}
		for (j = 0;j < 10;j++)
		{
			printf("%lld ", b[j]);
		}
		printf("\n");
	}
	return 0;
}