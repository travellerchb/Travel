#include<stdio.h>
int main()
{
	int a[100000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int s = -225, z = 0;
	scanf_s("%d", &a[0]);
	int max = a[0];
	for (i = 1;i < n;i++)
	{
		scanf_s("%d", &a[i]);
		z = max - a[i];
		if (z > s)
		{
			s = z;
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("%d", s);
	return 0;
}