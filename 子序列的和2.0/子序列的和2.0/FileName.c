#include<stdio.h>
#include<math.h>
int main()
{
	double n, m = 0;
	double sum = 0;
	int i = 0, j = 0;
	while (1)
	{
		sum = 0;
		scanf_s("%lf%lf", &n, &m);
		if (n == 0 && m == 0)
		{
			break;
		}
		j = (int)m - (int)n;
		sum += 1.0 / pow(n, 2);
		for (i = 1;i <= j;i++)
		{
			n = n + 1;
			sum += 1.0 / pow(n, 2);
		}
		printf("%lf\n", sum);
	}
	return 0;
}