#include<stdio.h>
int main()
{
	char a[90] = "";
	int n = 0;
	scanf_s("%d", &n);
	int i = 0, j = 0;
	int b = 0;
	int k = 0, z = 0;
	double sum = 0;
	for (i = 0;i < n;i++)
	{
		sum = 0;
		scanf_s("%s", a, 90);
		for (j = 0;a[j] != '\0';j++)
		{
			b = ((int)a[j]);
			if (b >= 65 && b <= 90)
			{
				z = 0;
				if (b == 67)
				{
					for (k = j+1;((int)a[k]) >= 48 && ((int)a[k]) <= 57;k++)
					{
						z = z * 10 + (int)a[k]-48;
					}
					if (z == 0)
					{
						z = 1;
					}
					sum += (12.01 * z);

				}
				else if (b == 72)
				{
					for (k = j + 1;((int)a[k]) >= 48 && ((int)a[k]) <= 57;k++)
					{
						z = z * 10 + (int)a[k]-48;
					}
					if (z == 0)
					{
						z = 1;
					}
					sum += (1.008 * z);
				}
				else if (b == 79)
				{
					for (k = j + 1;((int)a[k]) >= 48 && ((int)a[k]) <= 57;k++)
					{
						z = z * 10 + (int)a[k]-48;
					}
					if (z == 0)
					{
						z = 1;
					}
					sum += (16.00 * z);
				}
				else if (b == 78)
				{
					for (k = j + 1;((int)a[k]) >= 48 && ((int)a[k]) <= 57;k++)
					{
						z = z * 10 + (int)a[k]-48;
					}
					if (z == 0)
					{
						z = 1;
					}
					sum += (14.01 * z);
				}
			}
		}
		printf("%.3lf\n", sum);
	}
	return 0;
}