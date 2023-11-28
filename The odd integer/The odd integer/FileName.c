#include<stdio.h>
int main()
{
	int m = 0;
	scanf_s("%d", &m);
	int i = 0;
	int n = 0;
	int j = 0;
	int a[4000] = { 0 };
	int s = 0;
	int count = 0;
	int z = 0;
	while (i < m)
	{
		z = 0;
		i++;
		scanf_s("%d", &n);
		for (j = 0;j < n;j++)
		{
			scanf_s("%d", &a[j]);;
		}
		for (j = 0;j < n;j++)
		{
			count = 0;
			for (s = 0;s < n;s++)
			{
				if (a[j] == a[s])
				{
					count++;
				}
			}
			if (count % 2 != 0)
			{
				z = a[j];
				break;
			}
		}
		printf("No%d. The odd integer is: %d.\n", i, z);
	}
	return 0;
}