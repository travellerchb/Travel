#include<stdio.h>

int main()
{
	int k, s = 1;
	int a[101][101] = { 0 };
	int i, j = 0;
	int n = 0;
	scanf_s("%d", &n);
	s = 2 * n - 1;
	for (k = 1;k <= s;k++)
	{
		if (k == 1)
		{
			a[0][n - 1] = 1;
		}
		else if (k <= n)
		{
			if (k % 2 == 0)
			{
				for (i = 0, j = n - k;i < k, j < n;i++, j++)
				{
					if (i == 0)
					{
						a[i][j] = a[0][j + 1] + 1;
					}
					else
					{
						a[i][j] = a[i - 1][j - 1] + 1;
					}
				}
			}
			else if (k % 2 != 0)
			{
				for (i = k - 1, j = n - 1;i >= 0, j >= n - k;i--, j--)
				{
					if (i == k - 1)
					{
						a[i][j] = a[i - 1][j] + 1;
					}
					else
					{
						a[i][j] = a[i + 1][j + 1] + 1;
					}
				}
			}
		}
		else
		{
			if (k % 2 == 0)
			{
				for (i = k - n, j = 0;i < n, j <= 2 * n - k;i++, j++)
				{
					if (i == k - n)
					{
						a[i][j] = a[i - 1][0] + 1;
					}
					else
					{
						a[i][j] = a[i - 1][j - 1] + 1;
					}
				}
			}
			else if (k % 2 != 0)
			{
				for (i = n - 1, j = 2 * n - k - 1;i >= 0, j >= 0;i--, j--)
				{
					if (i == n - 1)
					{
						a[i][j] = a[i][j + 1] + 1;
					}
					else
					{
						a[i][j] = a[i + 1][j + 1] + 1;
					}
				}
			}
		}
	}
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}